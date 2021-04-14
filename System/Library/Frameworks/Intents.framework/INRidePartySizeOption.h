/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:22 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INRidePartySizeOptionExport.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, INPriceRange;

@interface INRidePartySizeOption : NSObject <INRidePartySizeOptionExport, NSCopying, NSSecureCoding> {

	NSString* _sizeDescription;
	INPriceRange* _priceRange;
	NSRange _partySizeRange;

}

@property (nonatomic,readonly) NSRange partySizeRange;                  //@synthesize partySizeRange=_partySizeRange - In the implementation block
@property (nonatomic,readonly) NSString * sizeDescription;              //@synthesize sizeDescription=_sizeDescription - In the implementation block
@property (nonatomic,readonly) INPriceRange * priceRange;               //@synthesize priceRange=_priceRange - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(INPriceRange *)priceRange;
-(id)_dictionaryRepresentation;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(NSRange)partySizeRange;
-(NSString *)sizeDescription;
-(id)initWithPartySizeRange:(NSRange)arg1 sizeDescription:(id)arg2 priceRange:(id)arg3 ;
@end
