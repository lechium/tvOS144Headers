/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:21 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TVControlServices.framework/TVControlServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVControlServices/TVControlServices-Structs.h>
#import <TVControlServices/TVCSEndpoint.h>

@class NSString;

@interface TVCSPairableEndpoint : TVCSEndpoint {

	NSString* _bonjourServiceName;
	NSString* _pairingPublicKey;

}

@property (nonatomic,copy) NSString * bonjourServiceName;              //@synthesize bonjourServiceName=_bonjourServiceName - In the implementation block
@property (nonatomic,copy) NSString * pairingPublicKey;                //@synthesize pairingPublicKey=_pairingPublicKey - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)bonjourServiceName;
-(BOOL)_isEqualToPairableEndpoint:(id)arg1 ;
-(void)_cloneFromPairableEndpoint:(id)arg1 ;
-(NSString *)pairingPublicKey;
-(void)setBonjourServiceName:(NSString *)arg1 ;
-(void)setPairingPublicKey:(NSString *)arg1 ;
@end

