/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:19:49 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /usr/lib/system/libxpc.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libxpc.dylib/OS_xpc_object.h>
#import <libobjc.A.dylib/OS_xpc_uint64.h>

@protocol OS_xpc_uint64 <OS_xpc_object>
@end


@class NSString;

@interface OS_xpc_uint64 : OS_xpc_object <OS_xpc_uint64>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)retain;
-(oneway void)release;
-(BOOL)allowsWeakReference;
-(BOOL)retainWeakReference;
-(unsigned long long)retainCount;
@end
