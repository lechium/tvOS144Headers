/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:56 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OpusKit/OKWidgetView.h>

@class NSURL, OKDocument, OKPresentationViewController;

@interface OKWidgetOpusView : OKWidgetView {

	NSURL* _url;
	OKDocument* _document;
	OKPresentationViewController* _presentationViewController;

}
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithWidget:(id)arg1 ;
-(BOOL)prepareForDisplay:(BOOL)arg1 ;
-(BOOL)prepareForWarmup:(BOOL)arg1 ;
-(BOOL)prepareForUnload:(BOOL)arg1 ;
-(void)setSettingUrl:(id)arg1 ;
-(void)_loadDocumentIfNeeded;
@end

