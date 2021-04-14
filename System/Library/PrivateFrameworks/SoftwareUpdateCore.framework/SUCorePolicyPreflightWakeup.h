/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:14 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateCore.framework/SoftwareUpdateCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SoftwareUpdateCore/SoftwareUpdateCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary;

@interface SUCorePolicyPreflightWakeup : NSObject <NSSecureCoding, NSCopying> {

	BOOL _performPhase;
	NSDictionary* _basePreflightOptions;
	NSDictionary* _additionalOptions;

}

@property (assign,nonatomic) BOOL performPhase;                                //@synthesize performPhase=_performPhase - In the implementation block
@property (nonatomic,retain) NSDictionary * basePreflightOptions;              //@synthesize basePreflightOptions=_basePreflightOptions - In the implementation block
@property (nonatomic,retain) NSDictionary * additionalOptions;                 //@synthesize additionalOptions=_additionalOptions - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)summary;
-(void)setAdditionalOptions:(NSDictionary *)arg1 ;
-(NSDictionary *)additionalOptions;
-(NSDictionary *)basePreflightOptions;
-(void)setBasePreflightOptions:(NSDictionary *)arg1 ;
-(BOOL)performPhase;
-(void)setPerformPhase:(BOOL)arg1 ;
@end

