/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:51 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TrustedPeers.framework/TrustedPeers
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol TPPublicKey;
@class NSString, NSData;

@interface TPPeerPermanentInfo : NSObject {

	NSString* _machineID;
	NSString* _modelID;
	unsigned long long _epoch;
	id<TPPublicKey> _signingPubKey;
	id<TPPublicKey> _encryptionPubKey;
	NSData* _data;
	NSData* _sig;
	NSString* _peerID;

}

@property (nonatomic,retain) NSString * machineID;                          //@synthesize machineID=_machineID - In the implementation block
@property (nonatomic,retain) NSString * modelID;                            //@synthesize modelID=_modelID - In the implementation block
@property (assign,nonatomic) unsigned long long epoch;                      //@synthesize epoch=_epoch - In the implementation block
@property (nonatomic,retain) id<TPPublicKey> signingPubKey;                 //@synthesize signingPubKey=_signingPubKey - In the implementation block
@property (nonatomic,retain) id<TPPublicKey> encryptionPubKey;              //@synthesize encryptionPubKey=_encryptionPubKey - In the implementation block
@property (nonatomic,retain) NSData * data;                                 //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSData * sig;                                  //@synthesize sig=_sig - In the implementation block
@property (nonatomic,retain) NSString * peerID;                             //@synthesize peerID=_peerID - In the implementation block
+(id)permanentInfoWithMachineID:(id)arg1 modelID:(id)arg2 epoch:(unsigned long long)arg3 signingKeyPair:(id)arg4 encryptionKeyPair:(id)arg5 peerIDHashAlgo:(long long)arg6 error:(id*)arg7 ;
+(id)peerIDForData:(id)arg1 sig:(id)arg2 peerIDHashAlgo:(long long)arg3 ;
+(id)permanentInfoWithPeerID:(id)arg1 data:(id)arg2 sig:(id)arg3 keyFactory:(id)arg4 ;
-(id)description;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)epoch;
-(void)setEpoch:(unsigned long long)arg1 ;
-(NSString *)peerID;
-(void)setPeerID:(NSString *)arg1 ;
-(NSString *)machineID;
-(void)setMachineID:(NSString *)arg1 ;
-(NSString *)modelID;
-(void)setModelID:(NSString *)arg1 ;
-(void)setSig:(NSData *)arg1 ;
-(NSData *)sig;
-(id)initWithMachineID:(id)arg1 modelID:(id)arg2 epoch:(unsigned long long)arg3 signingPubKey:(id)arg4 encryptionPubKey:(id)arg5 data:(id)arg6 sig:(id)arg7 peerID:(id)arg8 ;
-(id<TPPublicKey>)signingPubKey;
-(void)setSigningPubKey:(id<TPPublicKey>)arg1 ;
-(id<TPPublicKey>)encryptionPubKey;
-(void)setEncryptionPubKey:(id<TPPublicKey>)arg1 ;
@end

