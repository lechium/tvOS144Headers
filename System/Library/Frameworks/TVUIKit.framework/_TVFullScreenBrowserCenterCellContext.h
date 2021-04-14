/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:36 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/TVUIKit.framework/TVUIKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSIndexPath;

@interface _TVFullScreenBrowserCenterCellContext : NSObject {

	BOOL _willCenterSent;
	BOOL _didCenterSent;
	NSIndexPath* _indexPath;

}

@property (nonatomic,readonly) NSIndexPath * indexPath;                                //@synthesize indexPath=_indexPath - In the implementation block
@property (assign,getter=isWillCenterSent,nonatomic) BOOL willCenterSent;              //@synthesize willCenterSent=_willCenterSent - In the implementation block
@property (assign,getter=isDidCenterSent,nonatomic) BOOL didCenterSent;                //@synthesize didCenterSent=_didCenterSent - In the implementation block
-(NSIndexPath *)indexPath;
-(id)initWithIndexPath:(id)arg1 ;
-(BOOL)isWillCenterSent;
-(void)setWillCenterSent:(BOOL)arg1 ;
-(BOOL)isDidCenterSent;
-(void)setDidCenterSent:(BOOL)arg1 ;
@end

