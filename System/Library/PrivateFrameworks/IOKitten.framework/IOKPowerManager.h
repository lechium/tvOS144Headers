/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:31 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/IOKitten.framework/IOKitten
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface IOKPowerManager : NSObject {

	unsigned _connection;

}
+(id)powerManager;
+(BOOL)isSleepEnabled;
-(id)init;
-(void)dealloc;
-(BOOL)sleepSystemWithError:(id*)arg1 ;
@end

