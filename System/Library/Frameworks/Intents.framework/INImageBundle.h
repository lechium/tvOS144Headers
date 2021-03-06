/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:24 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface INImageBundle : NSObject <NSSecureCoding, NSCopying> {

	NSString* _bundlePath;
	NSString* _bundleIdentifier;
	unsigned long long _bundleType;

}

@property (nonatomic,copy) NSString * bundlePath;                        //@synthesize bundlePath=_bundlePath - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                  //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long bundleType;              //@synthesize bundleType=_bundleType - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(NSString *)bundlePath;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setBundlePath:(NSString *)arg1 ;
-(unsigned long long)bundleType;
-(void)setBundleType:(unsigned long long)arg1 ;
@end

