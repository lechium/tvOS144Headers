/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:28 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIImageAsset.h>

@class CUICatalog, NSData;

@interface _UIImageStackImageAsset : UIImageAsset {

	CUICatalog* _catalog;
	NSData* _stackData;

}

@property (nonatomic,retain) CUICatalog * catalog;              //@synthesize catalog=_catalog - In the implementation block
@property (nonatomic,copy) NSData * stackData;                  //@synthesize stackData=_stackData - In the implementation block
-(id)initWithContentsOfFile:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)imageWithConfiguration:(id)arg1 ;
-(CUICatalog *)catalog;
-(void)setCatalog:(CUICatalog *)arg1 ;
-(void)setStackData:(NSData *)arg1 ;
-(NSData *)stackData;
@end

