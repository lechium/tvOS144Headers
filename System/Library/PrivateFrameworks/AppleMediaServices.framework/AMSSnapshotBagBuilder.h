/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:28 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary, NSDate, AMSProcessInfo, NSString;

@interface AMSSnapshotBagBuilder : NSObject {

	NSDictionary* _data;
	NSDate* _expirationDate;
	AMSProcessInfo* _processInfo;
	NSString* _profile;
	NSString* _profileVersion;

}

@property (nonatomic,retain) NSDictionary * data;                       //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSDate * expirationDate;                   //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,retain) AMSProcessInfo * processInfo;              //@synthesize processInfo=_processInfo - In the implementation block
@property (nonatomic,retain) NSString * profile;                        //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) NSString * profileVersion;                 //@synthesize profileVersion=_profileVersion - In the implementation block
-(NSDictionary *)data;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(NSDate *)expirationDate;
-(void)setData:(NSDictionary *)arg1 ;
-(AMSProcessInfo *)processInfo;
-(NSString *)profile;
-(void)setProcessInfo:(AMSProcessInfo *)arg1 ;
-(void)setProfile:(NSString *)arg1 ;
-(NSString *)profileVersion;
-(void)setProfileVersion:(NSString *)arg1 ;
-(id)buildWithError:(id*)arg1 ;
@end

