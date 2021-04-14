/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:10 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol NSTextSelectionDataSource;
#import <UIFoundation/UIFoundation-Structs.h>
@class __NSTextSelectionLineFragmentInfo;

@interface NSTextSelectionNavigation : NSObject {

	id<NSTextSelectionDataSource> _textSelectionDataSource;
	__NSTextSelectionLineFragmentInfo* _lineFragmentInfoCache[8];
	long long _multipleSelectionAnchor;
	BOOL _supportsLayoutOrientation;
	BOOL _supportsContainer;
	BOOL _allowsNonContiguousRanges;
	BOOL _rotatesCoordinateSystemForLayoutOrientation;

}

@property (__weak) id<NSTextSelectionDataSource> textSelectionDataSource;              //@synthesize textSelectionDataSource=_textSelectionDataSource - In the implementation block
@property (assign) BOOL allowsNonContiguousRanges;                                     //@synthesize allowsNonContiguousRanges=_allowsNonContiguousRanges - In the implementation block
@property (assign) BOOL rotatesCoordinateSystemForLayoutOrientation;                   //@synthesize rotatesCoordinateSystemForLayoutOrientation=_rotatesCoordinateSystemForLayoutOrientation - In the implementation block
+(id)_substringRangeForEnumerationType:(unsigned long long)arg1 location:(id)arg2 dataSource:(id)arg3 string:(out id*)arg4 enclosingRange:(out id*)arg5 ;
+(void)_setupCharacterSets;
-(void)dealloc;
-(id)initWithDataSource:(id)arg1 ;
-(id<NSTextSelectionDataSource>)textSelectionDataSource;
-(id)_lineFragmentInfoForLocation:(id)arg1 affinity:(long long)arg2 ;
-(long long)_horizontalDirectionForDirection:(long long)arg1 location:(id)arg2 ;
-(id)_copyRangeForTextLineFragmentAtLocation:(id)arg1 affinity:(long long)arg2 ;
-(id)_lineFragmentInfoForRange:(id)arg1 ;
-(long long)_logicalDirectionForDirection:(long long)arg1 textSelection:(id)arg2 ;
-(BOOL)_location:(id)arg1 withAffinity:(long long)arg2 isAtBoundaryOfDestination:(long long)arg3 onSide:(long long)arg4 ;
-(double)_anchorPositionOffsetForLocation:(id)arg1 textSelection:(id)arg2 ;
-(BOOL)allowsNonContiguousRanges;
-(id)_logicalDestinationLocationForTextSelection:(id)arg1 originLocation:(id)arg2 direction:(long long)arg3 destination:(long long)arg4 extending:(BOOL)arg5 confined:(BOOL)arg6 affinity:(inout long long*)arg7 ;
-(void)setTextSelectionDataSource:(id<NSTextSelectionDataSource>)arg1 ;
-(void)flushLayoutCache;
-(id)_visualDestinationLocationForTextSelection:(id)arg1 originLocation:(inout id*)arg2 direction:(long long)arg3 destination:(long long)arg4 extending:(BOOL)arg5 confined:(BOOL)arg6 affinity:(inout long long*)arg7 crossedLine:(out BOOL*)arg8 ;
-(id)_adjustLocationForNearestCaretPosition:(id)arg1 direction:(long long)arg2 ;
-(id)_rangesForSelectionStartingOffset:(double)arg1 inLineFragmentInfo:(id)arg2 endingOffset:(double)arg3 inLineFragmentInfo:(id)arg4 contiguous:(BOOL)arg5 ;
-(id)_lineFragmentInfoForPoint:(CGPoint)arg1 inContainerAtLocation:(id)arg2 bounds:(CGRect)arg3 layoutOrientation:(long long)arg4 beforeDocument:(out BOOL*)arg5 afterDocument:(out BOOL*)arg6 lineFragmentRange:(out id*)arg7 ;
-(id)textSelectionForSelectionGranularity:(long long)arg1 enclosingTextSelection:(id)arg2 ;
-(id)textSelectionForSelectionGranularity:(long long)arg1 enclosingPoint:(CGPoint)arg2 inContainerAtLocation:(id)arg3 bounds:(CGRect)arg4 ;
-(id)_findAnchorInfoForTextSelection:(id)arg1 anchorPositionOffset:(inout double*)arg2 anchorLocation:(out id*)arg3 ;
-(id)_rangeOfCombinedLineFragmentsInRanges:(id)arg1 ;
-(id)textSelectionsInteractingAtPoint:(CGPoint)arg1 inContainerAtLocation:(id)arg2 anchors:(id)arg3 modifiers:(unsigned long long)arg4 selecting:(BOOL)arg5 bounds:(CGRect)arg6 ;
-(unsigned char)_bidiLevelAtLocation:(id)arg1 affinity:(long long)arg2 ;
-(id)destinationSelectionForTextSelection:(id)arg1 direction:(long long)arg2 destination:(long long)arg3 extending:(BOOL)arg4 confined:(BOOL)arg5 ;
-(id)_rangesWithDirectionalFormatAdjustmentsForRanges:(id)arg1 ;
-(double)_caretOffsetForTextLocation:(id)arg1 affinity:(long long)arg2 ;
-(id)textSelectionForSelectionGranularity:(long long)arg1 enclosingPoint:(CGPoint)arg2 inContainerAtLocation:(id)arg3 ;
-(id)textSelectionsInteractingAtPoint:(CGPoint)arg1 inContainerAtLocation:(id)arg2 anchors:(id)arg3 modifiers:(unsigned long long)arg4 selecting:(BOOL)arg5 ;
-(id)resolvedInsertionPointForTextSelection:(id)arg1 writingDirection:(long long)arg2 ;
-(id)deletionRangesForTextSelection:(id)arg1 direction:(long long)arg2 destination:(long long)arg3 allowsDecomposition:(BOOL)arg4 ;
-(void)setAllowsNonContiguousRanges:(BOOL)arg1 ;
-(BOOL)rotatesCoordinateSystemForLayoutOrientation;
-(void)setRotatesCoordinateSystemForLayoutOrientation:(BOOL)arg1 ;
-(id)destinationForTextSelection:(id)arg1 direction:(long long)arg2 destination:(long long)arg3 extending:(BOOL)arg4 ;
-(id)destinationForTextSelection:(id)arg1 direction:(long long)arg2 destination:(long long)arg3 extending:(BOOL)arg4 confined:(BOOL)arg5 ;
-(id)textSelectionsForPoint:(CGPoint)arg1 inContainerAtLocation:(id)arg2 anchors:(id)arg3 modifiers:(unsigned long long)arg4 selecting:(BOOL)arg5 ;
@end
