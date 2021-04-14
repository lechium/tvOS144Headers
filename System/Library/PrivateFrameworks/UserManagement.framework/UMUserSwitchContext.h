/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:10 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UserManagement.framework/UserManagement
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSData, NSString, NSDictionary;

@interface UMUserSwitchContext : NSObject {

	BOOL _secondaryActionRequired;
	NSData* _setupData;
	NSString* _shortLivedToken;
	NSDictionary* _environmentsByServices;

}

@property (nonatomic,copy) NSData * setupData;                                 //@synthesize setupData=_setupData - In the implementation block
@property (nonatomic,copy) NSString * shortLivedToken;                         //@synthesize shortLivedToken=_shortLivedToken - In the implementation block
@property (assign,nonatomic) BOOL secondaryActionRequired;                     //@synthesize secondaryActionRequired=_secondaryActionRequired - In the implementation block
@property (nonatomic,copy) NSDictionary * environmentsByServices;              //@synthesize environmentsByServices=_environmentsByServices - In the implementation block
+(id)contextWithDataRepresentation:(id)arg1 ;
+(BOOL)_isInternalBuild;
+(void)_switchEnvironmentsByServices:(id)arg1 ;
+(id)contextWithSetupData:(id)arg1 shortLivedToken:(id)arg2 secondaryActionRequired:(BOOL)arg3 ;
-(id)description;
-(id)dataRepresentation;
-(void)setSetupData:(NSData *)arg1 ;
-(void)setShortLivedToken:(NSString *)arg1 ;
-(void)setSecondaryActionRequired:(BOOL)arg1 ;
-(void)setEnvironmentsByServices:(NSDictionary *)arg1 ;
-(NSDictionary *)environmentsByServices;
-(NSData *)setupData;
-(NSString *)shortLivedToken;
-(BOOL)secondaryActionRequired;
-(id)dictRepresentation;
@end

