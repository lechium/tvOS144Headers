/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:44 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DeviceManagement/DMFAppRequest.h>

@class NSDictionary;

@interface DMFSetAppConfigurationRequest : DMFAppRequest {

	NSDictionary* _configuration;

}

@property (nonatomic,copy) NSDictionary * configuration;              //@synthesize configuration=_configuration - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)permittedPlatforms;
+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)configuration;
-(void)setConfiguration:(NSDictionary *)arg1 ;
@end

