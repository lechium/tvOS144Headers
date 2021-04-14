/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:08 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class ENWebResource, NSArray;

@interface ENWebArchive : NSObject {

	ENWebResource* _mainResource;
	NSArray* _subresources;
	NSArray* _subframeArchives;

}

@property (nonatomic,retain) ENWebResource * mainResource;              //@synthesize mainResource=_mainResource - In the implementation block
@property (nonatomic,retain) NSArray * subresources;                    //@synthesize subresources=_subresources - In the implementation block
@property (nonatomic,retain) NSArray * subframeArchives;                //@synthesize subframeArchives=_subframeArchives - In the implementation block
+(id)webArchiveWithData:(id)arg1 ;
+(id)webArchiveWithDictionary:(id)arg1 ;
-(id)data;
-(id)propertyList;
-(ENWebResource *)mainResource;
-(NSArray *)subresources;
-(id)initWithMainResource:(id)arg1 subresources:(id)arg2 subframeArchives:(id)arg3 ;
-(NSArray *)subframeArchives;
-(void)setMainResource:(ENWebResource *)arg1 ;
-(void)setSubresources:(NSArray *)arg1 ;
-(void)setSubframeArchives:(NSArray *)arg1 ;
@end

