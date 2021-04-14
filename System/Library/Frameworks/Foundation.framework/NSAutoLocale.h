/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:19:58 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSLocale.h>

@class NSLocale;

@interface NSAutoLocale : NSLocale {

	NSLocale* loc;
	opaque_pthread_mutex_t _lock;

}
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(void)finalize;
-(Class)classForCoder;
-(id)objectForKey:(id)arg1 ;
-(unsigned char)_nullLocale;
-(void)_setNullLocale;
-(id)_prefs;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)displayNameForKey:(id)arg1 value:(id)arg2 ;
-(id)initWithLocaleIdentifier:(id)arg1 ;
-(id)_init;
-(void)_update:(id)arg1 ;
@end

