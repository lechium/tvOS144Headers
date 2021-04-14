/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:03 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class SKWarpGeometry;


@protocol SKWarpable <NSObject>
@property (nonatomic,retain) SKWarpGeometry * warpGeometry; 
@property (assign,nonatomic) long long subdivisionLevels; 
@required
-(void)setWarpGeometry:(id)arg1;
-(SKWarpGeometry *)warpGeometry;
-(void)setSubdivisionLevels:(long long)arg1;
-(long long)subdivisionLevels;

@end
