/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:44 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class KTApplicationPublicKeyStore, TransparencyManagedDataStore, NSString, KTLogClient;

@interface KTContextVerifier : NSObject {

	KTApplicationPublicKeyStore* _applicationKeyStore;
	TransparencyManagedDataStore* _dataStore;
	NSString* _applicationID;
	KTLogClient* _logClient;

}

@property (retain) KTApplicationPublicKeyStore * applicationKeyStore;              //@synthesize applicationKeyStore=_applicationKeyStore - In the implementation block
@property (retain) TransparencyManagedDataStore * dataStore;                       //@synthesize dataStore=_dataStore - In the implementation block
@property (retain) NSString * applicationID;                                       //@synthesize applicationID=_applicationID - In the implementation block
@property (retain) KTLogClient * logClient;                                        //@synthesize logClient=_logClient - In the implementation block
+(BOOL)verifyServerLoggableDatas:(id)arg1 againstSyncedLoggableDatas:(id)arg2 error:(id*)arg3 ;
+(void)addDeviceIdVRFOutput:(id)arg1 toLoggableDatas:(id)arg2 forDeviceId:(id)arg3 ;
+(void)addClientDataVRFOutput:(id)arg1 toLoggableDatas:(id)arg2 forClientData:(id)arg3 ;
+(long long)verifyMutation:(id)arg1 record:(id)arg2 ;
+(BOOL)verifyReceivedWitnessesForLoggableDatas:(id)arg1 error:(id*)arg2 ;
-(TransparencyManagedDataStore *)dataStore;
-(void)setDataStore:(TransparencyManagedDataStore *)arg1 ;
-(NSString *)applicationID;
-(void)setApplicationID:(NSString *)arg1 ;
-(KTLogClient *)logClient;
-(BOOL)verifyRevisionLogInclusionProofResponse:(id)arg1 error:(id*)arg2 ;
-(KTApplicationPublicKeyStore *)applicationKeyStore;
-(unsigned long long)verifyConsistencyProofResponse:(id)arg1 startRevision:(long long)arg2 error:(id*)arg3 ;
-(void)verifySTHs:(id)arg1 ;
-(void)checkHeadEpoch:(id)arg1 isMapHead:(BOOL)arg2 ;
-(unsigned long long)verifyUriWitness:(id)arg1 uri:(id)arg2 error:(id*)arg3 ;
-(BOOL)verifyResponseAccountId:(id)arg1 requestAccountId:(id)arg2 error:(id*)arg3 ;
-(unsigned long long)verifyDeviceWitnesses:(id)arg1 requestDevices:(id)arg2 loggableDatas:(id)arg3 uriVRFOutput:(id)arg4 error:(id*)arg5 ;
-(unsigned long long)verifyInclusionProof:(id)arg1 mapLeaf:(id*)arg2 error:(id*)arg3 ;
-(void)verifyKTSMTsMerged:(id)arg1 queryResponse:(id)arg2 uri:(id)arg3 accountId:(id)arg4 ;
-(unsigned long long)verifySMTs:(id)arg1 request:(id)arg2 error:(id*)arg3 ;
-(unsigned long long)verifyDeviceWitness:(id)arg1 deviceId:(id)arg2 uriVRFOutput:(id)arg3 error:(id*)arg4 ;
-(unsigned long long)verifyClientDataWitness:(id)arg1 clientData:(id)arg2 uriVRFOutput:(id)arg3 error:(id*)arg4 ;
-(void)failSMTsIfOverMMD:(id)arg1 proof:(id)arg2 underlyingError:(id)arg3 errorCode:(long long)arg4 serverHint:(id)arg5 ;
-(void)failSMTsIfOverMMD:(id)arg1 proof:(id)arg2 underlyingError:(id)arg3 errorCode:(long long)arg4 savePendingError:(BOOL)arg5 serverHint:(id)arg6 ;
-(void)verifyKTSMTs:(id)arg1 ;
-(void)setApplicationKeyStore:(KTApplicationPublicKeyStore *)arg1 ;
-(void)setLogClient:(KTLogClient *)arg1 ;
-(id)initWithApplicationKeyStore:(id)arg1 dataStore:(id)arg2 applicationID:(id)arg3 ;
-(id)createErrorFromSMTFailure:(id)arg1 underlyingError:(id)arg2 ;
-(id)createChainOfErrorsFromSMTFailures:(id)arg1 ;
-(void)reportVerifySMTFailure:(id)arg1 serverHint:(id)arg2 error:(id)arg3 ;
-(void)deleteSMT:(id)arg1 error:(id)arg2 ;
-(unsigned long long)verifyClientDataWitnesses:(id)arg1 clientDatas:(id)arg2 loggableDatas:(id)arg3 uriVRFOutput:(id)arg4 error:(id*)arg5 ;
-(BOOL)setInclusionVerifiedState:(unsigned long long)arg1 perApplicationTreeLogEntry:(id)arg2 failure:(id)arg3 error:(id*)arg4 ;
-(BOOL)setInclusionVerifiedState:(unsigned long long)arg1 topLevelTreeLogEntry:(id)arg2 failure:(id)arg3 error:(id*)arg4 ;
-(BOOL)setInclusionVerifiedState:(unsigned long long)arg1 logEntry:(id)arg2 failure:(id)arg3 error:(id*)arg4 ;
-(unsigned long long)verifyRevisionLogProofLogEntry:(id)arg1 patSTH:(id*)arg2 error:(id*)arg3 ;
-(unsigned long long)verifyRevisionLogTopLevelProof:(id)arg1 patSTH:(id)arg2 error:(id*)arg3 ;
-(BOOL)areSMTsOverMMD:(id)arg1 ;
@end

