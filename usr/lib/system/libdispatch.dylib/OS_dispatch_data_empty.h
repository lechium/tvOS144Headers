/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:19:48 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /usr/lib/system/libdispatch.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libdispatch.dylib/libdispatch.dylib-Structs.h>
#import <libdispatch.dylib/OS_dispatch_data.h>

@interface OS_dispatch_data_empty : OS_dispatch_data
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)retain;
-(oneway void)release;
-(id)autorelease;
-(unsigned long long)retainCount;
-(void)_setContext:(void*)arg1 ;
-(void*)_getContext;
-(void)_setFinalizer:(/*function pointer*/void*)arg1 ;
-(void)_setTargetQueue:(id)arg1 ;
-(void)_suspend;
-(void)_resume;
-(void)_activate;
@end
