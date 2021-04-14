/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:08 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, UIImage;

@interface AVNowPlayingChapter : NSObject {

	double _startTime;
	NSString* _title;
	UIImage* _image;

}

@property (nonatomic,readonly) double startTime;              //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,readonly) NSString * title;              //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) UIImage * image;               //@synthesize image=_image - In the implementation block
-(double)startTime;
-(NSString *)title;
-(UIImage *)image;
-(id)initWithStartTime:(double)arg1 title:(id)arg2 image:(id)arg3 ;
@end

