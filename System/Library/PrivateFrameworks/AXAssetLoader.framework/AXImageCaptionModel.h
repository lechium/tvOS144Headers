/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:59 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AXAssetLoader.framework/AXAssetLoader
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary, NSString;

@interface AXImageCaptionModel : NSObject {

	NSDictionary* _modelProperties;

}

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * version; 
@property (nonatomic,readonly) NSString * stage; 
@property (nonatomic,readonly) NSString * language; 
-(NSString *)name;
-(id)description;
-(NSString *)version;
-(NSString *)language;
-(NSString *)stage;
-(id)initWithModelProperties:(id)arg1 ;
@end

