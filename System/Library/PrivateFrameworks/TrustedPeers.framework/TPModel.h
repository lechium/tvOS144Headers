/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:51 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TrustedPeers.framework/TrustedPeers
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol TPDecrypter;
@class NSMutableDictionary, NSMutableSet, NSData, NSArray;

@interface TPModel : NSObject {

	NSMutableDictionary* _peersByID;
	NSMutableDictionary* _policiesByVersion;
	NSMutableSet* _uncheckedVouchers;
	NSMutableSet* _vouchers;
	id<TPDecrypter> _decrypter;
	NSData* _recoverySigningPubKey;
	NSData* _recoveryEncryptionPubKey;
	NSArray* _cachedViableBottles;
	NSArray* _cachedPartialViableBottles;

}

@property (nonatomic,retain) NSMutableDictionary * peersByID;                      //@synthesize peersByID=_peersByID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * policiesByVersion;              //@synthesize policiesByVersion=_policiesByVersion - In the implementation block
@property (nonatomic,retain) NSMutableSet * uncheckedVouchers;                     //@synthesize uncheckedVouchers=_uncheckedVouchers - In the implementation block
@property (nonatomic,retain) NSMutableSet * vouchers;                              //@synthesize vouchers=_vouchers - In the implementation block
@property (nonatomic,retain) id<TPDecrypter> decrypter;                            //@synthesize decrypter=_decrypter - In the implementation block
@property (nonatomic,retain) NSData * recoverySigningPubKey;                       //@synthesize recoverySigningPubKey=_recoverySigningPubKey - In the implementation block
@property (nonatomic,retain) NSData * recoveryEncryptionPubKey;                    //@synthesize recoveryEncryptionPubKey=_recoveryEncryptionPubKey - In the implementation block
@property (nonatomic,retain) NSArray * cachedViableBottles;                        //@synthesize cachedViableBottles=_cachedViableBottles - In the implementation block
@property (nonatomic,retain) NSArray * cachedPartialViableBottles;                 //@synthesize cachedPartialViableBottles=_cachedPartialViableBottles - In the implementation block
+(id)preapprovalsFromKeys:(id)arg1 ;
-(id)allPeers;
-(id<TPDecrypter>)decrypter;
-(void)setDecrypter:(id<TPDecrypter>)arg1 ;
-(id)initWithDecrypter:(id)arg1 ;
-(unsigned long long)latestEpochAmongPeerIDs:(id)arg1 ;
-(void)registerPolicyDocument:(id)arg1 ;
-(id)policyWithVersion:(unsigned long long)arg1 ;
-(id)allPeerIDs;
-(id)allVouchers;
-(id)allPolicyVersions;
-(void)registerPeerWithPermanentInfo:(id)arg1 ;
-(void)deletePeerWithID:(id)arg1 ;
-(BOOL)hasPeerWithID:(id)arg1 ;
-(id)peerWithID:(id)arg1 ;
-(id)actualPeerWithID:(id)arg1 error:(id*)arg2 ;
-(id)allMachineIDs;
-(id)viablePeerCountsByModelID;
-(id)peerCountsByMachineID;
-(BOOL)hasPotentiallyTrustedPeerPreapprovingKey:(id)arg1 ;
-(BOOL)hasPotentiallyTrustedPeerWithSigningKey:(id)arg1 ;
-(BOOL)validatePeerWithPreApproval:(id)arg1 sponsor:(id)arg2 ;
-(unsigned long long)statusOfPeerWithID:(id)arg1 ;
-(BOOL)setWrappedPrivateKeys:(id)arg1 forPeerWithID:(id)arg2 error:(id*)arg3 ;
-(id)getStableInfoForPeerWithID:(id)arg1 ;
-(id)getDynamicInfoForPeerWithID:(id)arg1 ;
-(int)userViewSyncabilityConsensusAmongTrustedPeers:(id)arg1 ;
-(BOOL)updateStableInfo:(id)arg1 forPeerWithID:(id)arg2 error:(id*)arg3 ;
-(id)createStableInfoWithFrozenPolicyVersion:(id)arg1 flexiblePolicyVersion:(id)arg2 policySecrets:(id)arg3 syncUserControllableViews:(int)arg4 deviceName:(id)arg5 serialNumber:(id)arg6 osVersion:(id)arg7 signingKeyPair:(id)arg8 recoverySigningPubKey:(id)arg9 recoveryEncryptionPubKey:(id)arg10 error:(id*)arg11 ;
-(BOOL)updateDynamicInfo:(id)arg1 forPeerWithID:(id)arg2 error:(id*)arg3 ;
-(unsigned long long)maxClock;
-(id)createDynamicInfoWithIncludedPeerIDs:(id)arg1 excludedPeerIDs:(id)arg2 dispositions:(id)arg3 preapprovals:(id)arg4 signingKeyPair:(id)arg5 error:(id*)arg6 ;
-(BOOL)canTrustCandidate:(id)arg1 inEpoch:(unsigned long long)arg2 ;
-(BOOL)canIntroduceCandidate:(id)arg1 withSponsor:(id)arg2 toEpoch:(unsigned long long)arg3 underPolicy:(id)arg4 disposition:(id)arg5 ;
-(BOOL)checkIntroductionForCandidate:(id)arg1 stableInfo:(id)arg2 withSponsorID:(id)arg3 error:(id*)arg4 ;
-(id)createVoucherForCandidate:(id)arg1 stableInfo:(id)arg2 withSponsorID:(id)arg3 reason:(unsigned long long)arg4 signingKeyPair:(id)arg5 error:(id*)arg6 ;
-(BOOL)validateVoucherForPeer:(id)arg1 sponsor:(id)arg2 ;
-(void)registerVoucher:(id)arg1 ;
-(void)checkVouchers;
-(id)considerCandidateID:(id)arg1 withSponsorID:(id)arg2 sponsorPermanentInfo:(id)arg3 toExpandIncludedPeerIDs:(id)arg4 andExcludedPeerIDs:(id)arg5 dispositions:(id)arg6 currentMachineIDs:(id)arg7 forEpoch:(unsigned long long)arg8 ;
-(void)considerVouchersSponsoredByPeerID:(id)arg1 sponsorPermanentInfo:(id)arg2 toRecursivelyExpandIncludedPeerIDs:(id)arg3 andExcludedPeerIDs:(id)arg4 dispositions:(id)arg5 currentMachineIDs:(id)arg6 forEpoch:(unsigned long long)arg7 ;
-(void)considerPreapprovalsSponsoredByPeer:(id)arg1 toRecursivelyExpandIncludedPeerIDs:(id)arg2 andExcludedPeerIDs:(id)arg3 dispositions:(id)arg4 currentMachineIDs:(id)arg5 forEpoch:(unsigned long long)arg6 ;
-(void)recursivelyExpandIncludedPeerIDs:(id)arg1 andExcludedPeerIDs:(id)arg2 dispositions:(id)arg3 withPeersTrustedBySponsorID:(id)arg4 currentMachineIDs:(id)arg5 forEpoch:(unsigned long long)arg6 ;
-(id)calculateDynamicInfoForPeerWithID:(id)arg1 addingPeerIDs:(id)arg2 removingPeerIDs:(id)arg3 preapprovedKeys:(id)arg4 signingKeyPair:(id)arg5 currentMachineIDs:(id)arg6 error:(id*)arg7 ;
-(id)calculateDynamicInfoFromModel:(id)arg1 peer:(id)arg2 peerPermanentInfo:(id)arg3 peerStableInfo:(id)arg4 startingDynamicInfo:(id)arg5 addingPeerIDs:(id)arg6 removingPeerIDs:(id)arg7 preapprovedKeys:(id)arg8 signingKeyPair:(id)arg9 currentMachineIDs:(id)arg10 error:(id*)arg11 ;
-(id)filterPeerList:(id)arg1 byMachineIDs:(id)arg2 dispositions:(id)arg3 ;
-(id)peersWithMachineID:(id)arg1 ;
-(void)filterPreapprovals:(id)arg1 forExistingPeers:(id)arg2 ;
-(id)dynamicInfoForJoiningPeerID:(id)arg1 peerPermanentInfo:(id)arg2 peerStableInfo:(id)arg3 sponsorID:(id)arg4 preapprovedKeys:(id)arg5 signingKeyPair:(id)arg6 currentMachineIDs:(id)arg7 error:(id*)arg8 ;
-(id)policyForPeerIDs:(id)arg1 candidatePeerID:(id)arg2 candidateStableInfo:(id)arg3 error:(id*)arg4 ;
-(BOOL)considerPolicyFromPeerID:(id)arg1 stableInfo:(id)arg2 secrets:(id)arg3 newestPolicyDoc:(id*)arg4 error:(id*)arg5 ;
-(id)getViewsForPeer:(id)arg1 stableInfo:(id)arg2 error:(id*)arg3 ;
-(id)getPeerIDsTrustedByPeerWithID:(id)arg1 toAccessView:(id)arg2 error:(id*)arg3 ;
-(id)getPeerIDsTrustedByPeerWithDynamicInfo:(id)arg1 toAccessView:(id)arg2 error:(id*)arg3 ;
-(id)vectorClock;
-(id)bestRecoveryKeyForStableInfo:(id)arg1 dynamicInfo:(id)arg2 ;
-(id)untrustedPeerIDs;
-(id)peerIDThatTrustsRecoveryKeys:(id)arg1 ;
-(BOOL)isRecoveryKeyEnrolled;
-(void)setRecoveryKeys:(id)arg1 ;
-(id)currentCachedViableBottlesSet;
-(void)setViableBottles:(id)arg1 ;
-(void)clearViableBottles;
-(id)recoverySigningPublicKey;
-(id)recoveryEncryptionPublicKey;
-(NSMutableDictionary *)peersByID;
-(void)setPeersByID:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)policiesByVersion;
-(void)setPoliciesByVersion:(NSMutableDictionary *)arg1 ;
-(NSMutableSet *)uncheckedVouchers;
-(void)setUncheckedVouchers:(NSMutableSet *)arg1 ;
-(NSMutableSet *)vouchers;
-(void)setVouchers:(NSMutableSet *)arg1 ;
-(NSData *)recoverySigningPubKey;
-(void)setRecoverySigningPubKey:(NSData *)arg1 ;
-(NSData *)recoveryEncryptionPubKey;
-(void)setRecoveryEncryptionPubKey:(NSData *)arg1 ;
-(NSArray *)cachedViableBottles;
-(void)setCachedViableBottles:(NSArray *)arg1 ;
-(NSArray *)cachedPartialViableBottles;
-(void)setCachedPartialViableBottles:(NSArray *)arg1 ;
@end

