/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:59 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <WebKit/WebKit-Structs.h>
@class WKDOMNode, NSString, NSArray;

@interface WKDOMRange : NSObject {

	RefPtr<WebCore::Range, WTF::DumbPtrTraits<WebCore::Range> >* _impl;

}

@property (retain,readonly) WKDOMNode * startContainer; 
@property (readonly) long long startOffset; 
@property (retain,readonly) WKDOMNode * endContainer; 
@property (readonly) long long endOffset; 
@property (copy,readonly) NSString * text; 
@property (readonly) BOOL isCollapsed; 
@property (readonly) NSArray * textRects; 
-(void)dealloc;
-(NSString *)text;
-(long long)endOffset;
-(long long)startOffset;
-(NSArray *)textRects;
-(WKDOMNode *)startContainer;
-(WKDOMNode *)endContainer;
-(void)setStart:(id)arg1 offset:(int)arg2 ;
-(void)setEnd:(id)arg1 offset:(int)arg2 ;
-(void)collapse:(BOOL)arg1 ;
-(void)selectNode:(id)arg1 ;
-(void)selectNodeContents:(id)arg1 ;
-(BOOL)isCollapsed;
-(id)initWithDocument:(id)arg1 ;
-(id)_initWithImpl:(Range*)arg1 ;
-(id)rangeByExpandingToWordBoundaryByCharacters:(unsigned long long)arg1 inDirection:(long long)arg2 ;
-(OpaqueWKBundleRangeHandleRef)_copyBundleRangeHandleRef;
@end

