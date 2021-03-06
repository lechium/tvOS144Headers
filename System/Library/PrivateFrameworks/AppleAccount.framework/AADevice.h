/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:57 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface AADevice : NSObject {

	NSString* _model;
	NSString* _name;
	NSString* _osVersion;
	NSString* _swVersion;
	NSString* _modelSmallPhotoURL3x;
	NSString* _modelSmallPhotoURL2x;
	NSString* _modelSmallPhotoURL1x;
	NSString* _modelLargePhotoURL3x;
	NSString* _modelLargePhotoURL2x;
	NSString* _modelLargePhotoURL1x;
	NSString* _modelDisplayName;

}

@property (nonatomic,readonly) NSString * model;                             //@synthesize model=_model - In the implementation block
@property (nonatomic,readonly) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * osVersion;                         //@synthesize osVersion=_osVersion - In the implementation block
@property (nonatomic,readonly) NSString * swVersion;                         //@synthesize swVersion=_swVersion - In the implementation block
@property (nonatomic,readonly) NSString * modelSmallPhotoURL3x;              //@synthesize modelSmallPhotoURL3x=_modelSmallPhotoURL3x - In the implementation block
@property (nonatomic,readonly) NSString * modelSmallPhotoURL2x;              //@synthesize modelSmallPhotoURL2x=_modelSmallPhotoURL2x - In the implementation block
@property (nonatomic,readonly) NSString * modelSmallPhotoURL1x;              //@synthesize modelSmallPhotoURL1x=_modelSmallPhotoURL1x - In the implementation block
@property (nonatomic,readonly) NSString * modelLargePhotoURL3x;              //@synthesize modelLargePhotoURL3x=_modelLargePhotoURL3x - In the implementation block
@property (nonatomic,readonly) NSString * modelLargePhotoURL2x;              //@synthesize modelLargePhotoURL2x=_modelLargePhotoURL2x - In the implementation block
@property (nonatomic,readonly) NSString * modelLargePhotoURL1x;              //@synthesize modelLargePhotoURL1x=_modelLargePhotoURL1x - In the implementation block
@property (nonatomic,readonly) NSString * modelDisplayName;                  //@synthesize modelDisplayName=_modelDisplayName - In the implementation block
-(NSString *)name;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)model;
-(NSString *)osVersion;
-(NSString *)modelDisplayName;
-(NSString *)modelSmallPhotoURL3x;
-(NSString *)modelSmallPhotoURL2x;
-(NSString *)modelSmallPhotoURL1x;
-(NSString *)modelLargePhotoURL3x;
-(NSString *)modelLargePhotoURL2x;
-(NSString *)modelLargePhotoURL1x;
-(NSString *)swVersion;
@end

