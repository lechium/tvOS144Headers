/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:53 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDSiriSession.h>

@protocol PBSMediaRemoteServiceInterface;
@class PBSMediaRemoteSiriContext;

@interface HMDPineBoardSiriSession : HMDSiriSession {

	PBSMediaRemoteSiriContext* _siriUIContext;
	id<PBSMediaRemoteServiceInterface> _siriUIProxy;

}

@property (nonatomic,retain) PBSMediaRemoteSiriContext * siriUIContext;                   //@synthesize siriUIContext=_siriUIContext - In the implementation block
@property (nonatomic,retain) id<PBSMediaRemoteServiceInterface> siriUIProxy;              //@synthesize siriUIProxy=_siriUIProxy - In the implementation block
-(id)initWithIdentifier:(id)arg1 ;
-(void)deactivate;
-(BOOL)activateWithAccessory:(id)arg1 ;
-(void)_createPBContext;
-(id<PBSMediaRemoteServiceInterface>)siriUIProxy;
-(void)setSiriUIProxy:(id<PBSMediaRemoteServiceInterface>)arg1 ;
-(PBSMediaRemoteSiriContext *)siriUIContext;
-(void)setSiriUIContext:(PBSMediaRemoteSiriContext *)arg1 ;
@end

