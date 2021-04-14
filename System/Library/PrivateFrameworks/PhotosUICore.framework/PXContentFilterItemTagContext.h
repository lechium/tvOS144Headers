/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:45 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, PHKeyword;

@interface PXContentFilterItemTagContext : NSObject {

	NSString* _containerId;
	PHKeyword* _keyword;

}

@property (nonatomic,copy) NSString * containerId;              //@synthesize containerId=_containerId - In the implementation block
@property (nonatomic,retain) PHKeyword * keyword;               //@synthesize keyword=_keyword - In the implementation block
-(void)setKeyword:(PHKeyword *)arg1 ;
-(PHKeyword *)keyword;
-(NSString *)containerId;
-(void)setContainerId:(NSString *)arg1 ;
@end

