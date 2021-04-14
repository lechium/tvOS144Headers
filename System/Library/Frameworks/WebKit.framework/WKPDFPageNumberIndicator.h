/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:58 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WebKit/WebKit-Structs.h>
#import <UIKitCore/UIView.h>

@interface WKPDFPageNumberIndicator : UIView {

	RetainPtr<UILabel>* _label;
	RetainPtr<_UIBackdropView>* _backdropView;
	RetainPtr<NSTimer>* _timer;
	BOOL _hasValidPageCountAndCurrentPage;
	unsigned _currentPageNumber;
	unsigned _pageCount;

}

@property (assign,nonatomic) unsigned currentPageNumber;              //@synthesize currentPageNumber=_currentPageNumber - In the implementation block
@property (assign,nonatomic) unsigned pageCount;                      //@synthesize pageCount=_pageCount - In the implementation block
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)show;
-(void)setPageCount:(unsigned)arg1 ;
-(unsigned)pageCount;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)hide;
-(void)_makeRoundedCorners;
-(void)_updateLabel;
-(void)hide:(id)arg1 ;
-(void)setCurrentPageNumber:(unsigned)arg1 ;
-(void)moveToPoint:(CGPoint)arg1 animated:(BOOL)arg2 ;
-(unsigned)currentPageNumber;
@end
