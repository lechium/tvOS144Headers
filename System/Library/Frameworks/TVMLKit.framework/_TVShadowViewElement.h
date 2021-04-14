/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:30 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class _TVShadowViewElementID, NSArray;

@interface _TVShadowViewElement : NSObject {

	_TVShadowViewElementID* _elementID;
	NSArray* _children;
	_TVShadowViewElement* _parent;

}

@property (nonatomic,copy) _TVShadowViewElementID * elementID;                  //@synthesize elementID=_elementID - In the implementation block
@property (nonatomic,copy) NSArray * children;                                  //@synthesize children=_children - In the implementation block
@property (assign,nonatomic,__weak) _TVShadowViewElement * parent;              //@synthesize parent=_parent - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSArray *)children;
-(_TVShadowViewElement *)parent;
-(void)setElementID:(_TVShadowViewElementID *)arg1 ;
-(_TVShadowViewElementID *)elementID;
-(void)setParent:(_TVShadowViewElement *)arg1 ;
-(void)setChildren:(NSArray *)arg1 ;
@end

