/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:05 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /usr/lib/libnetwork.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/OS_nw_authentication_challenge.h>

@class NWConcrete_nw_authentication_protection_space, NSString;

@interface NWConcrete_nw_authentication_challenge : NSObject <OS_nw_authentication_challenge> {

	NWConcrete_nw_authentication_protection_space* protection_space;
	void* http_message;
	int type;
	unsigned attempt_count;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
@end

