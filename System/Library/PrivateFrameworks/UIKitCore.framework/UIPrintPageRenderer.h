/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:44 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <UIKitCore/UIKitCore-Structs.h>
@class NSMutableArray, NSArray;

@interface UIPrintPageRenderer : NSObject {

	double _headerHeight;
	double _footerHeight;
	CGRect _paperRect;
	CGRect _printableRect;
	NSMutableArray* _printFormatters;
	CGContextRef _printContext;
	long long _cachedPageCount;

}

@property (assign,nonatomic) CGRect paperRect;                       //@synthesize paperRect=_paperRect - In the implementation block
@property (assign,nonatomic) CGRect printableRect;                   //@synthesize printableRect=_printableRect - In the implementation block
@property (assign,nonatomic) double headerHeight;                    //@synthesize headerHeight=_headerHeight - In the implementation block
@property (assign,nonatomic) double footerHeight;                    //@synthesize footerHeight=_footerHeight - In the implementation block
@property (nonatomic,readonly) long long numberOfPages; 
@property (copy) NSArray * printFormatters; 
-(void)dealloc;
-(void)setPaperRect:(CGRect)arg1 ;
-(void)setPrintableRect:(CGRect)arg1 ;
-(CGRect)paperRect;
-(double)headerHeight;
-(void)setHeaderHeight:(double)arg1 ;
-(double)footerHeight;
-(void)setFooterHeight:(double)arg1 ;
-(long long)numberOfPages;
-(CGRect)printableRect;
-(id)printFormattersForPageAtIndex:(long long)arg1 ;
-(void)prepareForDrawingPages:(NSRange)arg1 ;
-(void)addPrintFormatter:(id)arg1 startingAtPageAtIndex:(long long)arg2 ;
-(long long)_numberOfPages;
-(void)_removePrintFormatter:(id)arg1 ;
-(BOOL)_numberOfPagesIsCached;
-(void)_startSaveContext:(CGContextRef)arg1 ;
-(void)_drawPage:(long long)arg1 ;
-(void)_endSaveContext;
-(BOOL)_startPrintContext:(id)arg1 printSettings:(id)arg2 ;
-(void)_endPrintContext:(id)arg1 success:(BOOL)arg2 ;
-(NSArray *)printFormatters;
-(long long)_maxFormatterPage;
-(void)drawHeaderForPageAtIndex:(long long)arg1 inRect:(CGRect)arg2 ;
-(void)drawContentForPageAtIndex:(long long)arg1 inRect:(CGRect)arg2 ;
-(void)drawPrintFormatter:(id)arg1 forPageAtIndex:(long long)arg2 ;
-(void)drawFooterForPageAtIndex:(long long)arg1 inRect:(CGRect)arg2 ;
-(void)drawPageAtIndex:(long long)arg1 inRect:(CGRect)arg2 ;
-(void)setPrintFormatters:(NSArray *)arg1 ;
@end

