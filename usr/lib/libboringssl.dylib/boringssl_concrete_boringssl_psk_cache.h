/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:04 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /usr/lib/libboringssl.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/OS_boringssl_psk_cache.h>

@protocol OS_sec_array, OS_dispatch_queue;
@class NSObject, boringssl_concrete_boringssl_ctx, NSString;

@interface boringssl_concrete_boringssl_psk_cache : NSObject <OS_boringssl_psk_cache> {

	NSObject*<OS_sec_array> list;
	boringssl_concrete_boringssl_ctx* context;
	/*^block*/id psk_selection_block;
	NSObject*<OS_dispatch_queue> psk_selection_queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@end

