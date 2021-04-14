/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:12 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIButton.h>

@class NSURL;

@interface CANodeButton : UIButton {

	BOOL hasLabel;
	NSURL* _url;

}

@property (retain) NSURL * url;                //@synthesize url=_url - In the implementation block
@property (assign) BOOL hasLabel; 
-(id)init;
-(void)dealloc;
-(void)setUrl:(NSURL *)arg1 ;
-(NSURL *)url;
-(BOOL)hasLabel;
-(void)layoutSubviews;
-(void)setHasLabel:(BOOL)arg1 ;
@end

