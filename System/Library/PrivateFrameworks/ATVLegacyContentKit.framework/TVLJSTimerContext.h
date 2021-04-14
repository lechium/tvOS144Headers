/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:41 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <ATVLegacyContentKit/ATVLegacyContentKit-Structs.h>
@class TVLLegacyJSContext;

@interface TVLJSTimerContext : NSObject {

	TVLLegacyJSContext* _context;
	OpaqueJSValueRef _callback;
	OpaqueJSValueRef _thisObject;
	const OpaqueJSValue* _args;
	unsigned long long _argCount;

}

@property (retain,readonly) TVLLegacyJSContext * context;                //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) OpaqueJSValueRef callback;                //@synthesize callback=_callback - In the implementation block
@property (nonatomic,readonly) OpaqueJSValueRef thisObject;              //@synthesize thisObject=_thisObject - In the implementation block
@property (nonatomic,readonly) const OpaqueJSValue* args;                //@synthesize args=_args - In the implementation block
@property (nonatomic,readonly) unsigned long long argCount;              //@synthesize argCount=_argCount - In the implementation block
-(void)dealloc;
-(TVLLegacyJSContext *)context;
-(OpaqueJSValueRef)callback;
-(const OpaqueJSValue*)args;
-(OpaqueJSValueRef)thisObject;
-(id)initWithContext:(OpaqueJSContextRef)arg1 callback:(OpaqueJSValueRef)arg2 thisObject:(OpaqueJSValueRef)arg3 args:(const OpaqueJSValue*)arg4 argCount:(unsigned long long)arg5 ;
-(unsigned long long)argCount;
@end

