/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:59 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CIGVRenderer <GVRenderer>
@property (assign) int direction; 
@property (assign) CGSize separation; 
@property (assign) BOOL drawEdgesFirst; 
@required
-(void)setFileURL:(id)arg1;
-(int)direction;
-(CGSize)separation;
-(BOOL)setCanvasWidth:(unsigned)arg1 height:(unsigned)arg2;
-(void)setDirection:(int)arg1;
-(void)setSeparation:(CGSize)arg1;
-(void)drawNode:(id)arg1;
-(void)drawEdge:(id)arg1 withPath:(id)arg2;
-(BOOL)drawEdgesFirst;
-(void)setFileTitle:(id)arg1;
-(void)flushRender;
-(void)setDrawEdgesFirst:(BOOL)arg1;

@end

