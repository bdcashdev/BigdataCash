// Copyright (c) 2010 Satoshi Nakamoto
// Copyright (c) 2009-2014 The Bitcoin developers
// Copyright (c) 2014-2015 The Dash developers
// Copyright (c) 2015-2021 The PIVX Developers, The Bigdatacash Developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "chainparams.h"

#include "random.h"
#include "util.h"
#include "utilstrencodings.h"

#include <assert.h>

#include <boost/assign/list_of.hpp>

using namespace std;
using namespace boost::assign;

struct SeedSpec6 {
    uint8_t addr[16];
    uint16_t port;
};

#include "chainparamsseeds.h"

/**
 * Main network
 */

//! Convert the pnSeeds6 array into usable address objects.
static void convertSeed6(std::vector<CAddress>& vSeedsOut, const SeedSpec6* data, unsigned int count)
{
    // It'll only connect to one or two seed nodes because once it connects,
    // it'll get a pile of addresses with newer timestamps.
    // Seed nodes are given a random 'last seen time' of between one and two
    // weeks ago.
    const int64_t nOneWeek = 7 * 24 * 60 * 60;
    for (unsigned int i = 0; i < count; i++) {
        struct in6_addr ip;
        memcpy(&ip, data[i].addr, sizeof(ip));
        CAddress addr(CService(ip, data[i].port));
        addr.nTime = GetTime() - GetRand(nOneWeek) - nOneWeek;
        vSeedsOut.push_back(addr);
    }
}

//   What makes a good checkpoint block?
// + Is surrounded by blocks with reasonable timestamps
//   (no blocks before with a timestamp after, none after with
//    timestamp before)
// + Contains no strange transactions

static Checkpoints::MapCheckpoints mapCheckpoints =
    boost::assign::map_list_of
    (0, uint256("0x00000614f748a5984e0c535d008734c8cadfce1fbc979a9f4aa60982f40f0e5d"));
static const Checkpoints::CCheckpointData data = {
    &mapCheckpoints,
    1596043182, // * UNIX timestamp of last checkpoint block
    0,    // * total number of transactions between genesis and last checkpoint
                //   (the tx=... number in the SetBestChain debug.log lines)
    0        // * estimated number of transactions per day after checkpoint
};

static Checkpoints::MapCheckpoints mapCheckpointsTestnet =
    boost::assign::map_list_of(0, uint256("0x0000c7e4f06694fc6c2f3293e44ac2f9d829232ebeb790100b5e6a006f2d215e"));
static const Checkpoints::CCheckpointData dataTestnet = {
    &mapCheckpointsTestnet,
    1596043184,
    0,
    0};

static Checkpoints::MapCheckpoints mapCheckpointsRegtest =
    boost::assign::map_list_of(0, uint256("0x"));
static const Checkpoints::CCheckpointData dataRegtest = {
    &mapCheckpointsRegtest,
    0,
    0,
    0};

class CMainParams : public CChainParams
{
public:
    CMainParams()
    {
        networkID = CBaseChainParams::MAIN;
        strNetworkID = "main";
        /**
         * The message start string is designed to be unlikely to occur in normal data.
         * The characters are rarely used upper ASCII, not valid as UTF-8, and produce
         * a large 4-byte int at any alignment.
         */
        pchMessageStart[0] = 0x4e;
        pchMessageStart[1] = 0xd1;
        pchMessageStart[2] = 0xe4;
        pchMessageStart[3] = 0xa6;
        vAlertPubKey = ParseHex("049801bf46c8b443593b55388a6ed7ff7dd7ba5d5a7cc95327ec8427d56f2cab5ecfc9d2d0d6ca1a25cf96818cf1d38f21317c632634f2b9584c04915f5dac3325");
        nDefaultPort = 36264;
        bnProofOfWorkLimit = ~uint256(0) >> 20; // Bigdatacash starting difficulty is 1 / 2^12
        nSubsidyHalvingInterval = 210000;
        nMaxReorganizationDepth = 100;
        nEnforceBlockUpgradeMajority = 750;
        nRejectBlockOutdatedMajority = 950;
        nToCheckBlockUpgradeMajority = 1000;
        nMinerThreads = 0;
        nTargetTimespan = 3 * 60; // Bigdatacash: 1 minute (aka every block)
        nTargetSpacing = 3 * 60;  // Bigdatacash: 1 minute
        nLastPOWBlock = 10000;
        nMaturity = 15;
        nMasternodeCountDrift = 20;
        nModifierUpdateBlock = 510;
        nMaxMoneyOut = 15000000 * COIN;
        nNewMasternodeCollateral_StartBlock = 20; // Nov 7, 2018 (approximately)
	nNewMasternodeCollateral_GPBlock = 20; // 1 week grace period to allow for masternodes to activate using the new collateral
        nNewMasternode_Collateral = 5000;
        nOriginalMasternode_Collateral = 5000;
        nBudget_Fee_Confirmations = 15; // Number of confirmations for the finalization fee

        /**
         * Build the genesis block. Note that the output of the genesis coinbase cannot
         * be spent as it did not originally exist in the database.
         *
         * CBlock(hash=00000ffd590b14, ver=1, hashPrevBlock=00000000000000, hashMerkleRoot=e0028e, nTime=1390095618, nBits=1e0ffff0, nNonce=28917698, vtx=1)
         *   CTransaction(hash=e0028e, ver=1, vin.size=1, vout.size=1, nLockTime=0)
         *     CTxIn(COutPoint(000000, -1), coinbase 04ffff001d01044c5957697265642030392f4a616e2f3230313420546865204772616e64204578706572696d656e7420476f6573204c6976653a204f76657273746f636b2e636f6d204973204e6f7720416363657074696e6720426974636f696e73)
         *     CTxOut(nValue=50.00000000, scriptPubKey=0xA9037BAC7050C479B121CF)
         *   vMerkleTree: e0028e
         */

        const char* pszTimestamp = "BigdataCash new coin is better in 2020.";
        CMutableTransaction txNew;
        txNew.vin.resize(1);
        txNew.vout.resize(1);
        txNew.vin[0].scriptSig = CScript() << 486604799 << CScriptNum(4) << vector<unsigned char>((const unsigned char*)pszTimestamp, (const unsigned char*)pszTimestamp + strlen(pszTimestamp));
        txNew.vout[0].nValue = 1 * COIN;
        txNew.vout[0].scriptPubKey = CScript() << ParseHex("") << OP_CHECKSIG;
        genesis.vtx.push_back(txNew);
        genesis.hashPrevBlock = 0;
        genesis.hashMerkleRoot = genesis.BuildMerkleTree();
        genesis.nVersion = 1;
        genesis.nTime = 1596043182;
        genesis.nBits = 0x1e0fffff;
        genesis.nNonce = 31730;

/*
         printf("Generating genesis block...\n");
        uint32_t nounce = 1;
             while(1) {
          printf("Nounce: %d\n", nounce);
                 genesis.nNonce = nounce;
                 hashGenesisBlock = genesis.GetHash();
               if(hashGenesisBlock.GetHex() < std::string("0000ffffff000000000000000000000000000000000000000000000000000000")) {
                   //if(hashGenesisBlock.GetHex() < bnProofOfWorkLimit.GetHex()) {
                   //if(consensus.hashGenesisBlock.GetHex() < std::string("0000082da923a04678394f873852c7f08b777af30224b6e23296f586370e80ae")) {
                       printf("nounce: %x\n",nounce);
                       break;
                   } else {
                       if( nounce % 10000 == 0)
                           printf("nounce: %x, hash: %s, merklehash:%s\n",nounce, hashGenesisBlock.GetHex().c_str(),genesis.hashMerkleRoot.ToString().c_str());
                       ++nounce;
                   }
             }
        printf("genesis: %s\n",hashGenesisBlock.GetHex().c_str());
        printf("merklehash: %s\n",genesis.hashMerkleRoot.ToString().c_str());

*/
        hashGenesisBlock = genesis.GetHash();

        assert(hashGenesisBlock == uint256("0x00000614f748a5984e0c535d008734c8cadfce1fbc979a9f4aa60982f40f0e5d"));
        assert(genesis.hashMerkleRoot == uint256("0xf97a755483300998d99c0b1fcb37e9af35931d1b71c4aafb9d8b808a4e3f8a45"));

        vSeeds.push_back(CDNSSeedData("45.132.241.104", "45.132.241.104"));
        vSeeds.push_back(CDNSSeedData("104.156.238.77", "104.156.238.77"));       

        base58Prefixes[PUBKEY_ADDRESS] = std::vector<unsigned char>(1, 18);
        base58Prefixes[SCRIPT_ADDRESS] = std::vector<unsigned char>(1, 83);
        base58Prefixes[SECRET_KEY] = std::vector<unsigned char>(1, 151);
        base58Prefixes[EXT_PUBLIC_KEY] = boost::assign::list_of(0x02)(0x2D)(0x25)(0x33).convert_to_container<std::vector<unsigned char> >();
        base58Prefixes[EXT_SECRET_KEY] = boost::assign::list_of(0x02)(0x21)(0x31)(0x2B).convert_to_container<std::vector<unsigned char> >();
        // 	BIP44 coin type is from https://github.com/satoshilabs/slips/blob/master/slip-0044.md
        base58Prefixes[EXT_COIN_TYPE] = boost::assign::list_of(0x80)(0x00)(0x00)(0x77).convert_to_container<std::vector<unsigned char> >();

        convertSeed6(vFixedSeeds, pnSeed6_main, ARRAYLEN(pnSeed6_main));

        fRequireRPCPassword = true;
        fMiningRequiresPeers = false;
        fAllowMinDifficultyBlocks = true;
        fDefaultConsistencyChecks = false;
        fRequireStandard = true;
        fMineBlocksOnDemand = false;
        fSkipProofOfWorkCheck = true;
        fTestnetToBeDeprecatedFieldRPC = false;
        fHeadersFirstSyncingActive = false;

        nPoolMaxTransactions = 5;
        strSporkKey = "039528eb063c8ae80f8caf565f11dc442aaefbe84054592b60f7d2b8f878ea51f5";
        strObfuscationPoolDummyAddress = "8FcpFm9s7bEw4xAfHWtzCzFvzjLe5Rp4YN";
        nStartMasternodePayments = 1596043182;
    }

    const Checkpoints::CCheckpointData& Checkpoints() const
    {
        return data;
    }
};
static CMainParams mainParams;

/**
 * Testnet (v3)
 */
class CTestNetParams : public CMainParams
{
public:
    CTestNetParams()
    {
        networkID = CBaseChainParams::TESTNET;
        strNetworkID = "test";
        pchMessageStart[0] = 0x45;
        pchMessageStart[1] = 0x76;
        pchMessageStart[2] = 0x65;
        pchMessageStart[3] = 0xde;
        vAlertPubKey = ParseHex("04bbbca25baae2b28760e48dc56f43c4921bf4733edb9590a5c9e865c760454b79cd9a0032ab3702af295f4ca3e2fd44eec250c15be1b01a38edd758873642f480");
        nDefaultPort = 37264;
        nEnforceBlockUpgradeMajority = 51;
        nRejectBlockOutdatedMajority = 75;
        nToCheckBlockUpgradeMajority = 100;
        nMinerThreads = 0;
        nTargetTimespan = 1 * 60; // Bigdatacash: 1 minute
        nTargetSpacing = 1 * 60;  // Bigdatacash: 1 minute
        nLastPOWBlock = 200;
        nMaturity = 15;
        nMasternodeCountDrift = 4;
        nModifierUpdateBlock = 360;
        nMaxMoneyOut = 15000000 * COIN;

        genesis.nTime = 1596043184;
        genesis.nNonce = 104310;
        
      /*
         printf("Generating genesis block...\n");
        uint32_t nounce = 1;
             while(1) {
          printf("Nounce: %d\n", nounce);
                 genesis.nNonce = nounce;
                 hashGenesisBlock = genesis.GetHash();
               if(hashGenesisBlock.GetHex() < std::string("0000ffffff000000000000000000000000000000000000000000000000000000")) {
                   //if(hashGenesisBlock.GetHex() < bnProofOfWorkLimit.GetHex()) {
                   //if(consensus.hashGenesisBlock.GetHex() < std::string("0000082da923a04678394f873852c7f08b777af30224b6e23296f586370e80ae")) {
                       printf("nounce: %x\n",nounce);
                       break;
                   } else {
                       if( nounce % 10000 == 0)
                           printf("nounce: %x, hash: %s, merklehash:%s\n",nounce, hashGenesisBlock.GetHex().c_str(),genesis.hashMerkleRoot.ToString().c_str());
                       ++nounce;
                   }
             }
        printf("genesis: %s\n",hashGenesisBlock.GetHex().c_str());
        printf("merklehash: %s\n",genesis.hashMerkleRoot.ToString().c_str()); 
        
*/
        hashGenesisBlock = genesis.GetHash();
        assert(hashGenesisBlock == uint256("0x0000c7e4f06694fc6c2f3293e44ac2f9d829232ebeb790100b5e6a006f2d215e"));
        assert(genesis.hashMerkleRoot == uint256("0xf97a755483300998d99c0b1fcb37e9af35931d1b71c4aafb9d8b808a4e3f8a45"));

        vFixedSeeds.clear();
        vSeeds.clear();
        vSeeds.push_back(CDNSSeedData("45.132.241.104", "45.132.241.104"));
        vSeeds.push_back(CDNSSeedData("141.136.35.97", "141.136.35.97"));

        base58Prefixes[PUBKEY_ADDRESS] = std::vector<unsigned char>(1, 250); // Testnet bigdatacash addresses start with 'P'
        base58Prefixes[SCRIPT_ADDRESS] = std::vector<unsigned char>(1, 290);  // Testnet bigdatacash script addresses start with 'M'
        base58Prefixes[SECRET_KEY] = std::vector<unsigned char>(1, 184);     // Testnet private keys start with 2
        // Testnet bigdatacash BIP32 pubkeys start with 'DRKV'
        base58Prefixes[EXT_PUBLIC_KEY] = boost::assign::list_of(0x3a)(0x80)(0x61)(0xa0).convert_to_container<std::vector<unsigned char> >();
        // Testnet bigdatacash BIP32 prvkeys start with 'DRKP'
        base58Prefixes[EXT_SECRET_KEY] = boost::assign::list_of(0x3a)(0x80)(0x58)(0x37).convert_to_container<std::vector<unsigned char> >();
        // Testnet bigdatacash BIP44 coin type is '1' (All coin's testnet default)
        base58Prefixes[EXT_COIN_TYPE] = boost::assign::list_of(0x80)(0x00)(0x00)(0x01).convert_to_container<std::vector<unsigned char> >();

        convertSeed6(vFixedSeeds, pnSeed6_test, ARRAYLEN(pnSeed6_test));

        fRequireRPCPassword = true;
        fMiningRequiresPeers = true;
        fAllowMinDifficultyBlocks = true;
        fDefaultConsistencyChecks = false;
        fRequireStandard = false;
        fMineBlocksOnDemand = false;
        fTestnetToBeDeprecatedFieldRPC = true;

        nPoolMaxTransactions = 2;
        strSporkKey = "04dd78d703571dabd4ee783adae17178ed2e754ca8b5fd9e770ccb32283c5dd33e6c77c0917953eb681a06a46acc9769bb48066f6b4f900a87aed9843507fc3565";
        strObfuscationPoolDummyAddress = "2jmcYi7kXQPV7rC6qMh2TidoVPGXGB2cqdP";
        nStartMasternodePayments = 1596043184; //Fri, 09 Jan 2015 21:05:58 GMT
    }
    const Checkpoints::CCheckpointData& Checkpoints() const
    {
        return dataTestnet;
    }
};
static CTestNetParams testNetParams;

/**
 * Regression test
 */
class CRegTestParams : public CTestNetParams
{
public:
    CRegTestParams()
    {
        networkID = CBaseChainParams::REGTEST;
        strNetworkID = "regtest";
        strNetworkID = "regtest";
        pchMessageStart[0] = 0xa1;
        pchMessageStart[1] = 0xcf;
        pchMessageStart[2] = 0x7e;
        pchMessageStart[3] = 0xac;
        nSubsidyHalvingInterval = 150;
        nEnforceBlockUpgradeMajority = 750;
        nRejectBlockOutdatedMajority = 950;
        nToCheckBlockUpgradeMajority = 1000;
        nMinerThreads = 1;
        nTargetTimespan = 24 * 60 * 60; // BDCASH: 1 day
        nTargetSpacing = 1 * 60;        // BDCASH: 1 minutes
        bnProofOfWorkLimit = ~uint256(0) >> 1;
        genesis.nTime = 1454124731;
        genesis.nBits = 0x207fffff;
        genesis.nNonce = 12345;

        hashGenesisBlock = genesis.GetHash();
        nDefaultPort = 51476;
        //assert(hashGenesisBlock == uint256("0x"));

        vFixedSeeds.clear(); //! Testnet mode doesn't have any fixed seeds.
        vSeeds.clear();      //! Testnet mode doesn't have any DNS seeds.

        fRequireRPCPassword = false;
        fMiningRequiresPeers = false;
        fAllowMinDifficultyBlocks = true;
        fDefaultConsistencyChecks = true;
        fRequireStandard = false;
        fMineBlocksOnDemand = true;
        fTestnetToBeDeprecatedFieldRPC = false;
    }
    const Checkpoints::CCheckpointData& Checkpoints() const
    {
        return dataRegtest;
    }
};
static CRegTestParams regTestParams;

/**
 * Unit test
 */
class CUnitTestParams : public CMainParams, public CModifiableParams
{
public:
    CUnitTestParams()
    {
        networkID = CBaseChainParams::UNITTEST;
        strNetworkID = "unittest";
        nDefaultPort = 37263;
        vFixedSeeds.clear(); //! Unit test mode doesn't have any fixed seeds.
        vSeeds.clear();      //! Unit test mode doesn't have any DNS seeds.

        fRequireRPCPassword = false;
        fMiningRequiresPeers = false;
        fDefaultConsistencyChecks = true;
        fAllowMinDifficultyBlocks = false;
        fMineBlocksOnDemand = true;
    }

    const Checkpoints::CCheckpointData& Checkpoints() const
    {
        // UnitTest share the same checkpoints as MAIN
        return data;
    }

    //! Published setters to allow changing values in unit test cases
    virtual void setSubsidyHalvingInterval(int anSubsidyHalvingInterval) { nSubsidyHalvingInterval = anSubsidyHalvingInterval; }
    virtual void setEnforceBlockUpgradeMajority(int anEnforceBlockUpgradeMajority) { nEnforceBlockUpgradeMajority = anEnforceBlockUpgradeMajority; }
    virtual void setRejectBlockOutdatedMajority(int anRejectBlockOutdatedMajority) { nRejectBlockOutdatedMajority = anRejectBlockOutdatedMajority; }
    virtual void setToCheckBlockUpgradeMajority(int anToCheckBlockUpgradeMajority) { nToCheckBlockUpgradeMajority = anToCheckBlockUpgradeMajority; }
    virtual void setDefaultConsistencyChecks(bool afDefaultConsistencyChecks) { fDefaultConsistencyChecks = afDefaultConsistencyChecks; }
    virtual void setAllowMinDifficultyBlocks(bool afAllowMinDifficultyBlocks) { fAllowMinDifficultyBlocks = afAllowMinDifficultyBlocks; }
    virtual void setSkipProofOfWorkCheck(bool afSkipProofOfWorkCheck) { fSkipProofOfWorkCheck = afSkipProofOfWorkCheck; }
};
static CUnitTestParams unitTestParams;


static CChainParams* pCurrentParams = 0;

CModifiableParams* ModifiableParams()
{
    assert(pCurrentParams);
    assert(pCurrentParams == &unitTestParams);
    return (CModifiableParams*)&unitTestParams;
}

const CChainParams& Params()
{
    assert(pCurrentParams);
    return *pCurrentParams;
}

CChainParams& Params(CBaseChainParams::Network network)
{
    switch (network) {
    case CBaseChainParams::MAIN:
        return mainParams;
    case CBaseChainParams::TESTNET:
        return testNetParams;
    case CBaseChainParams::REGTEST:
        return regTestParams;
    case CBaseChainParams::UNITTEST:
        return unitTestParams;
    default:
        assert(false && "Unimplemented network");
        return mainParams;
    }
}

void SelectParams(CBaseChainParams::Network network)
{
    SelectBaseParams(network);
    pCurrentParams = &Params(network);
}

bool SelectParamsFromCommandLine()
{
    CBaseChainParams::Network network = NetworkIdFromCommandLine();
    if (network == CBaseChainParams::MAX_NETWORK_TYPES)
        return false;

    SelectParams(network);
    return true;
}
