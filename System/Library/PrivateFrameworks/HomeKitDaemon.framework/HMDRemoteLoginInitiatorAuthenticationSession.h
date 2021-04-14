/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:49 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDRemoteLoginInitiatorSession.h>

@class HMDRemoteLoginInitiatorAuthentication;

@interface HMDRemoteLoginInitiatorAuthenticationSession : HMDRemoteLoginInitiatorSession {

	HMDRemoteLoginInitiatorAuthentication* _remoteAuthentication;
	/*^block*/id _completion;

}

@property (nonatomic,readonly) HMDRemoteLoginInitiatorAuthentication * remoteAuthentication;              //@synthesize remoteAuthentication=_remoteAuthentication - In the implementation block
@property (nonatomic,readonly) id completion;                                                             //@synthesize completion=_completion - In the implementation block
-(id)description;
-(void)dealloc;
-(id)completion;
-(HMDRemoteLoginInitiatorAuthentication *)remoteAuthentication;
-(id)initWithSessionID:(id)arg1 remoteAuthentication:(id)arg2 completion:(/*^block*/id)arg3 home:(id)arg4 ;
@end

