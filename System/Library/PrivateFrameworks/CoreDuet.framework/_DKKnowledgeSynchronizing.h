/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:30 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _DKKnowledgeSynchronizing
@required
-(id)deviceUUID;
-(BOOL)synchronizeWithError:(id*)arg1;
-(BOOL)synchronizeWithUrgency:(unsigned long long)arg1 client:(id)arg2 error:(id*)arg3;
-(void)synchronizeWithUrgency:(unsigned long long)arg1 client:(id)arg2 responseQueue:(id)arg3 completion:(/*^block*/id)arg4;
-(BOOL)deleteRemoteState:(id*)arg1;
-(id)sourceDeviceIdentityFromObject:(id)arg1 error:(id*)arg2;
-(id)sourceDeviceIdentityWithError:(id*)arg1;

@end

