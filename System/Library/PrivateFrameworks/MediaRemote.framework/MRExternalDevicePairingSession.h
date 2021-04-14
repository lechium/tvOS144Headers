/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:07 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaRemote/MRCryptoPairingSession.h>

@class MRCoreUtilsPairingSession, MRCryptoPairingSessionBlockDelegate;

@interface MRExternalDevicePairingSession : MRCryptoPairingSession {

	MRCoreUtilsPairingSession* _pairingSession;
	MRCryptoPairingSessionBlockDelegate* _pairingDelegate;

}

@property (nonatomic,retain) MRCoreUtilsPairingSession * pairingSession;                         //@synthesize pairingSession=_pairingSession - In the implementation block
@property (nonatomic,retain) MRCryptoPairingSessionBlockDelegate * pairingDelegate;              //@synthesize pairingDelegate=_pairingDelegate - In the implementation block
@property (nonatomic,readonly) BOOL hasExchangedMessage; 
@property (getter=isUsingSystemPairing,nonatomic,readonly) BOOL usingSystemPairing; 
@property (nonatomic,readonly) unsigned long long state; 
-(BOOL)isValid;
-(void)open;
-(void)close;
-(void)setDelegate:(id)arg1 ;
-(unsigned long long)state;
-(id)initWithDevice:(id)arg1 ;
-(id)pairedDevices;
-(id)removePeer;
-(id)updatePeer;
-(BOOL)isPaired;
-(BOOL)isUsingSystemPairing;
-(void)handlePairingExchangeData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handlePairingFailureWithStatus:(int)arg1 ;
-(id)encryptData:(id)arg1 withError:(id*)arg2 ;
-(id)decryptData:(id)arg1 withError:(id*)arg2 ;
-(BOOL)deleteIdentityWithError:(id*)arg1 ;
-(BOOL)hasExchangedMessage;
-(void)setPairingDelegate:(MRCryptoPairingSessionBlockDelegate *)arg1 ;
-(void)setPairingSession:(MRCoreUtilsPairingSession *)arg1 ;
-(MRCoreUtilsPairingSession *)pairingSession;
-(MRCryptoPairingSessionBlockDelegate *)pairingDelegate;
@end

