/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:05 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /usr/lib/libnetwork.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libnetwork.dylib/libnetwork.dylib-Structs.h>
#import <libobjc.A.dylib/OS_nw_pac_resolver.h>

@protocol OS_nw_context;
@class NSObject, NSString;

@interface NWConcrete_nw_pac_resolver : NSObject <OS_nw_pac_resolver> {

	/*^block*/id result_block;
	NSObject*<OS_nw_context> context;
	CFURLRef endpointURL;
	CFURLRef pacURL;
	CFStringRef pacScript;
	CFDataRef auditToken;
	CFStringRef bundleIdentifier;
	char logging_id_str[75];
	unsigned https_is_opaque : 1;
	unsigned use_tls : 1;
	unsigned is_dry_run : 1;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
@end

