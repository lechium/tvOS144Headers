/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:50 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TelephonyUtilities/TelephonyUtilities-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface TUPhoneNumber : NSObject <NSCoding, NSSecureCoding> {

	CFPhoneNumberRef _phoneNumberRef;

}

@property (assign) CFPhoneNumberRef phoneNumberRef;                                  //@synthesize phoneNumberRef=_phoneNumberRef - In the implementation block
@property (readonly) NSString * digits; 
@property (readonly) NSString * countryCode; 
@property (readonly) NSString * formattedRepresentation; 
@property (readonly) NSString * formattedInternationalRepresentation; 
@property (readonly) NSString * unformattedInternationalRepresentation; 
+(BOOL)supportsSecureCoding;
+(id)phoneNumberWithDigits:(id)arg1 countryCode:(id)arg2 ;
+(BOOL)areDigits:(id)arg1 equalToDigits:(id)arg2 usingCountryCode:(id)arg3 ;
+(id)phoneNumberWithCFPhoneNumberRef:(CFPhoneNumberRef)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)countryCode;
-(id)initWithDigits:(id)arg1 countryCode:(id)arg2 ;
-(NSString *)digits;
-(CFPhoneNumberRef)phoneNumberRef;
-(id)initWithCFPhoneNumberRef:(CFPhoneNumberRef)arg1 ;
-(NSString *)formattedRepresentation;
-(NSString *)formattedInternationalRepresentation;
-(NSString *)unformattedInternationalRepresentation;
-(void)setPhoneNumberRef:(CFPhoneNumberRef)arg1 ;
@end

