/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:46 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/NearbyInteraction.framework/NearbyInteraction
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NearbyInteraction/NearbyInteraction-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface NIRegionPredicate : NSObject <NSCopying, NSSecureCoding> {

	float _radius;
	NSString* _name;
	long long _preferredUpdateRate;

}

@property (readonly) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (readonly) float radius;                             //@synthesize radius=_radius - In the implementation block
@property (assign) long long preferredUpdateRate;              //@synthesize preferredUpdateRate=_preferredUpdateRate - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(float)radius;
-(id)descriptionInternal;
-(id)initWithName:(id)arg1 radius:(float)arg2 preferredUpdateRate:(long long)arg3 ;
-(long long)preferredUpdateRate;
-(id)initWithName:(id)arg1 radius:(float)arg2 ;
-(void)setPreferredUpdateRate:(long long)arg1 ;
@end

