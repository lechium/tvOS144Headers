/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:34 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/JetEngine.framework/JetEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <JetEngine/JetEngine-Structs.h>
#import <libobjc.A.dylib/NSLocking.h>

@interface JEUnfairLock : NSObject <NSLocking> {

	os_unfair_lock_s _unfairLock;

}
+(void)initialize;
-(id)init;
-(void)lock;
-(void)unlock;
@end

