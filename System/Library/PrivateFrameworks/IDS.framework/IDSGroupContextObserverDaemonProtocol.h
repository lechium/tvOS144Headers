/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:01 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol IDSGroupContextObserverDaemonProtocol
@required
-(void)didCreateGroup:(id)arg1 completion:(/*^block*/id)arg2;
-(void)didCacheGroup:(id)arg1 completion:(/*^block*/id)arg2;
-(void)didUpdateGroup:(id)arg1 withNewGroup:(id)arg2 completion:(/*^block*/id)arg3;
-(void)didReceiveDecryptionFailureForGroup:(id)arg1 completion:(/*^block*/id)arg2;
-(void)didReceiveRegistrationIdentityUpdateWithCompletion:(/*^block*/id)arg1;

@end

