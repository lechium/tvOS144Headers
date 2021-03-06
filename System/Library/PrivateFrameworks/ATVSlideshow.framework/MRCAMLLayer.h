/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:48 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <ATVSlideshow/ATVSlideshow-Structs.h>
@class MRImageProvider, NSString, NSArray, NSDictionary;

@interface MRCAMLLayer : NSObject {

	double x;
	double y;
	double width;
	double height;
	double duration;
	float color[4];
	BOOL hasColor;
	BOOL hasSublayerTransform;
	BOOL hasTransform;
	CGPoint anchorPoint;
	double subScaleX;
	double subScaleY;
	double subScaleZ;
	double subRX;
	double subRY;
	double subRZ;
	double subTX;
	double subTY;
	double subTZ;
	double scaleX;
	double scaleY;
	double scaleZ;
	double rX;
	double rY;
	double rZ;
	double tX;
	double tY;
	double tZ;
	double opacity;
	BOOL hasOpacity;
	BOOL masksToBounds;
	MRImageProvider* contents;
	NSString* name;
	NSArray* animations;
	NSArray* sublayers;
	NSDictionary* states;
	NSArray* masks;

}

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,retain) NSArray * animations; 
@property (nonatomic,retain) NSArray * sublayers; 
@property (nonatomic,retain) NSDictionary * states; 
@property (nonatomic,retain) NSArray * masks; 
@property (nonatomic,retain) MRImageProvider * contents; 
-(NSString *)name;
-(id)init;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(MRImageProvider *)contents;
-(void)setStates:(NSDictionary *)arg1 ;
-(NSDictionary *)states;
-(void)setContents:(MRImageProvider *)arg1 ;
-(NSArray *)sublayers;
-(void)setSublayers:(NSArray *)arg1 ;
-(NSArray *)animations;
-(void)setAnimations:(NSArray *)arg1 ;
-(void)setMasks:(NSArray *)arg1 ;
-(NSArray *)masks;
@end

