/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:34 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SPOwner/SPOwner-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SPLocationAddress : NSObject <NSCopying, NSSecureCoding> {

	NSString* _formattedAddressLines;
	NSString* _country;
	NSString* _countryCode;
	NSString* _streetName;
	NSString* _streetAddress;
	NSString* _locality;
	NSString* _stateCode;
	NSString* _administrativeArea;
	NSString* _placemark;

}

@property (nonatomic,copy) NSString * formattedAddressLines;              //@synthesize formattedAddressLines=_formattedAddressLines - In the implementation block
@property (nonatomic,copy) NSString * country;                            //@synthesize country=_country - In the implementation block
@property (nonatomic,copy) NSString * countryCode;                        //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,copy) NSString * streetName;                         //@synthesize streetName=_streetName - In the implementation block
@property (nonatomic,copy) NSString * streetAddress;                      //@synthesize streetAddress=_streetAddress - In the implementation block
@property (nonatomic,copy) NSString * locality;                           //@synthesize locality=_locality - In the implementation block
@property (nonatomic,copy) NSString * stateCode;                          //@synthesize stateCode=_stateCode - In the implementation block
@property (nonatomic,copy) NSString * administrativeArea;                 //@synthesize administrativeArea=_administrativeArea - In the implementation block
@property (nonatomic,copy) NSString * placemark;                          //@synthesize placemark=_placemark - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)countryCode;
-(void)setCountryCode:(NSString *)arg1 ;
-(void)setFormattedAddressLines:(NSString *)arg1 ;
-(NSString *)formattedAddressLines;
-(void)setAdministrativeArea:(NSString *)arg1 ;
-(void)setLocality:(NSString *)arg1 ;
-(NSString *)administrativeArea;
-(NSString *)locality;
-(NSString *)streetAddress;
-(void)setStreetAddress:(NSString *)arg1 ;
-(NSString *)country;
-(void)setCountry:(NSString *)arg1 ;
-(NSString *)placemark;
-(NSString *)stateCode;
-(void)setStateCode:(NSString *)arg1 ;
-(void)setPlacemark:(NSString *)arg1 ;
-(id)initWithFormattedAddressLines:(id)arg1 country:(id)arg2 countryCode:(id)arg3 streetName:(id)arg4 streetAddress:(id)arg5 locality:(id)arg6 stateCode:(id)arg7 administrativeArea:(id)arg8 placemark:(id)arg9 ;
-(NSString *)streetName;
-(id)initWithFormattedAddressLines:(id)arg1 country:(id)arg2 countryCode:(id)arg3 streetName:(id)arg4 streetAddress:(id)arg5 locality:(id)arg6 stateCode:(id)arg7 administrativeArea:(id)arg8 ;
-(void)setStreetName:(NSString *)arg1 ;
@end

