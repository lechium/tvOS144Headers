/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:50 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /usr/lib/libcoreroutine.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol RTPersistenceMirroringDelegate <NSObject>
@required
-(void)performMirroringRequestWithType:(long long)arg1 affectedStore:(id)arg2 qualityOfService:(long long)arg3 handler:(/*^block*/id)arg4;
-(void)performMirroringRequestWithType:(long long)arg1 affectedStore:(id)arg2 qualityOfService:(long long)arg3 managedObjectContext:(id)arg4 handler:(/*^block*/id)arg5;

@end

