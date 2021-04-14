/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:32 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ITMLKit/ITMLKit-Structs.h>
#import <ITMLKit/IKViewElement.h>

@protocol IKDataSourceElementImplementing;
@class NSDictionary, NSArray, IKChangeSet;

@interface IKDataSourceElement : IKViewElement {

	BOOL _areItemsBound;
	struct {
		BOOL hasMasterPrototypes;
		BOOL hasProxiedItemElements;
		BOOL hasMasterPrototypeForItemAtIndex;
		BOOL hasResetImplicitUpdates;
		BOOL hasProxyElementForLoadedChildElement;
		BOOL hasCanProxyUnloadedChildElement;
	}  _implFlags;
	NSDictionary* _indexTitles;
	NSArray* _autoHighlightedChildElements;
	long long _autoHighlightIndex;
	id<IKDataSourceElementImplementing> _impl;

}

@property (nonatomic,copy) NSArray * autoHighlightedChildElements;                    //@synthesize autoHighlightedChildElements=_autoHighlightedChildElements - In the implementation block
@property (assign,nonatomic) long long autoHighlightIndex;                            //@synthesize autoHighlightIndex=_autoHighlightIndex - In the implementation block
@property (nonatomic,copy) NSDictionary * indexTitles;                                //@synthesize indexTitles=_indexTitles - In the implementation block
@property (nonatomic,readonly) id<IKDataSourceElementImplementing> impl;              //@synthesize impl=_impl - In the implementation block
@property (nonatomic,readonly) NSArray * masterPrototypes; 
@property (nonatomic,copy,readonly) NSArray * proxiedItemElements; 
@property (getter=areItemsBound,nonatomic,readonly) BOOL itemsBound; 
@property (nonatomic,readonly) NSArray * prototypes; 
@property (nonatomic,readonly) IKChangeSet * itemsChangeSet; 
+(unsigned long long)updateTypeForChangeInAttribute:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3 ;
-(id)debugDescription;
-(void)dealloc;
-(id<IKDataSourceElementImplementing>)impl;
-(long long)numberOfItems;
-(NSArray *)prototypes;
-(NSDictionary *)indexTitles;
-(void)setIndexTitles:(NSDictionary *)arg1 ;
-(IKChangeSet *)itemsChangeSet;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(void)configureUpdatesWithElement:(id)arg1 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(void)resetProperty:(unsigned long long)arg1 ;
-(void)appDocumentDidMarkStylesDirty;
-(void)resetImplicitUpdates;
-(NSArray *)masterPrototypes;
-(NSArray *)proxiedItemElements;
-(id)masterPrototypeForItemAtIndex:(unsigned long long)arg1 ;
-(id)proxyElementForLoadedChildElement:(id)arg1 ;
-(BOOL)canProxyUnloadedChildElement:(id)arg1 ;
-(id)_parsedIndexTitlesFromString:(id)arg1 ;
-(BOOL)areItemsBound;
-(NSArray *)autoHighlightedChildElements;
-(void)setAutoHighlightedChildElements:(NSArray *)arg1 ;
-(void)setAutoHighlightIndex:(long long)arg1 ;
-(id)prototypeForItemAtIndex:(long long)arg1 ;
-(id)elementForItemAtIndex:(long long)arg1 ;
-(long long)indexOfItemForElement:(id)arg1 ;
-(void)loadIndex:(long long)arg1 ;
-(void)unloadIndex:(long long)arg1 ;
-(void)resetUpdates;
-(long long)autoHighlightIndex;
-(id)firstItemElement;
-(id)lastItemElement;
-(void)enumerateItemElementsUsingBlock:(/*^block*/id)arg1 ;
@end

