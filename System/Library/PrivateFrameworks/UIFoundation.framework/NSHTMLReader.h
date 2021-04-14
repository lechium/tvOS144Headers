/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:11 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <UIFoundation/UIFoundation-Structs.h>
@class NSMutableAttributedString, NSMutableDictionary, NSData, NSURL, NSDictionary, WebView, DOMDocument, DOMRange, NSMutableArray, WebDataSource, NSString;

@interface NSHTMLReader : NSObject {

	NSMutableAttributedString* _attrStr;
	NSMutableDictionary* _documentAttrs;
	NSData* _data;
	NSURL* _baseURL;
	NSDictionary* _options;
	WebView* _webView;
	id _webDelegate;
	DOMDocument* _document;
	DOMRange* _domRange;
	NSMutableArray* _domStartAncestors;
	WebDataSource* _dataSource;
	NSString* _standardFontFamily;
	double _textSizeMultiplier;
	double _webViewTextSizeMultiplier;
	double _defaultTabInterval;
	double _defaultFontSize;
	double _minimumFontSize;
	NSMutableArray* _textLists;
	NSMutableArray* _textBlocks;
	NSMutableArray* _textTables;
	NSMutableDictionary* _textTableFooters;
	NSMutableArray* _textTableSpacings;
	NSMutableArray* _textTablePaddings;
	NSMutableArray* _textTableRows;
	NSMutableArray* _textTableRowArrays;
	NSMutableArray* _textTableRowBackgroundColors;
	NSMutableDictionary* _computedStylesForElements;
	NSMutableDictionary* _specifiedStylesForElements;
	NSMutableDictionary* _stringsForNodes;
	NSMutableDictionary* _floatsForNodes;
	NSMutableDictionary* _colorsForNodes;
	NSMutableDictionary* _attributesForElements;
	NSMutableDictionary* _elementIsBlockLevel;
	NSMutableDictionary* _fontCache;
	NSMutableArray* _writingDirectionArray;
	long long _domRangeStartIndex;
	long long _indexingLimit;
	long long _thumbnailLimit;
	long long _errorCode;
	long long _quoteLevel;
	struct {
		unsigned isSoft : 1;
		unsigned reachedStart : 1;
		unsigned reachedEnd : 1;
		unsigned isIndexing : 1;
		unsigned isTesting : 1;
		unsigned hasTrailingNewline : 1;
		unsigned pad : 26;
	}  _flags;

}
+(void)initialize;
+(id)defaultParagraphStyle;
+(BOOL)allowsAttributedStringAgentForOptions:(id)arg1 ;
+(BOOL)_usesLibXML2ForOptions:(id)arg1 ;
-(void)dealloc;
-(void)_load;
-(id)initWithData:(id)arg1 options:(id)arg2 ;
-(id)initWithPath:(id)arg1 options:(id)arg2 ;
-(id)attributedString;
-(void)setMutableAttributedString:(id)arg1 ;
-(id)documentAttributes;
-(id)_computedStyleForElement:(id)arg1 ;
-(id)_specifiedStyleForElement:(id)arg1 ;
-(id)_stringForNode:(id)arg1 property:(id)arg2 ;
-(id)_computedStringForNode:(id)arg1 property:(id)arg2 ;
-(BOOL)_getFloat:(double*)arg1 forNode:(id)arg2 property:(id)arg3 ;
-(BOOL)_getComputedFloat:(double*)arg1 forNode:(id)arg2 property:(id)arg3 ;
-(BOOL)_elementIsBlockLevel:(id)arg1 ;
-(id)_blockLevelElementForNode:(id)arg1 ;
-(BOOL)_elementHasOwnBackgroundColor:(id)arg1 ;
-(id)_colorForNode:(id)arg1 property:(id)arg2 ;
-(id)_computedColorForNode:(id)arg1 property:(id)arg2 ;
-(id)_computedAttributesForElement:(id)arg1 ;
-(id)_attributesForElement:(id)arg1 ;
-(Class)_DOMHTMLTableCellElementClass;
-(id)_childrenForNode:(id)arg1 ;
-(void)_processMetaElementWithName:(id)arg1 content:(id)arg2 ;
-(void)_processHeadElement:(id)arg1 ;
-(void)_newParagraphForElement:(id)arg1 tag:(id)arg2 allowEmpty:(BOOL)arg3 suppressTrailingSpace:(BOOL)arg4 isEntering:(BOOL)arg5 ;
-(void)_fillInBlock:(id)arg1 forElement:(id)arg2 backgroundColor:(id)arg3 extraMargin:(double)arg4 extraPadding:(double)arg5 isTable:(BOOL)arg6 ;
-(void)_addTableCellForElement:(id)arg1 ;
-(void)_addTableForElement:(id)arg1 ;
-(BOOL)_addAttachmentForElement:(id)arg1 URL:(id)arg2 needsParagraph:(BOOL)arg3 usePlaceholder:(BOOL)arg4 ;
-(void)_traverseNode:(id)arg1 depth:(long long)arg2 embedded:(BOOL)arg3 ;
-(void)_newLineForElement:(id)arg1 ;
-(void)_addQuoteForElement:(id)arg1 opening:(BOOL)arg2 level:(long long)arg3 ;
-(void)_addValue:(id)arg1 forElement:(id)arg2 ;
-(void)_newTabForElement:(id)arg1 ;
-(void)_traverseFooterNode:(id)arg1 depth:(long long)arg2 ;
-(void)_addMarkersToList:(id)arg1 range:(NSRange)arg2 ;
-(BOOL)_enterElement:(id)arg1 tag:(id)arg2 display:(id)arg3 depth:(long long)arg4 embedded:(BOOL)arg5 ;
-(BOOL)_processElement:(id)arg1 tag:(id)arg2 display:(id)arg3 depth:(long long)arg4 ;
-(void)_exitElement:(id)arg1 tag:(id)arg2 display:(id)arg3 depth:(long long)arg4 startIndex:(unsigned long long)arg5 ;
-(void)_processText:(id)arg1 ;
-(BOOL)_sanitizeWebArchiveDictionary:(id)arg1 ;
-(BOOL)_sanitizeWebArchiveArray:(id)arg1 ;
-(Class)_webArchiveClass;
-(Class)_webViewClass;
-(id)_createWebArchiveForData:(id)arg1 ;
-(id)_webPreferences;
-(void)_parseNode:(id)arg1 ;
-(void)_adjustTrailingNewline;
-(void)_loadUsingWebKit;
-(void)_loadFromDOMRange;
-(void)_loadUsingWebKitOnMainThread;
-(id)initWithDOMRange:(id)arg1 ;
@end

