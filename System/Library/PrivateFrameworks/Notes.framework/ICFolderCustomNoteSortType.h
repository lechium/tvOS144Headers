/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:48 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSNumber, NSString;

@interface ICFolderCustomNoteSortType : NSObject {

	unsigned long long _order;
	unsigned long long _direction;

}

@property (assign,nonatomic) unsigned long long order;                              //@synthesize order=_order - In the implementation block
@property (assign,nonatomic) unsigned long long direction;                          //@synthesize direction=_direction - In the implementation block
@property (nonatomic,readonly) NSNumber * valueRepresentation; 
@property (nonatomic,readonly) BOOL isDefault; 
@property (nonatomic,readonly) NSString * summaryViewTitleDescription; 
+(id)folderNoteSortTypeWithOrder:(unsigned long long)arg1 direction:(unsigned long long)arg2 ;
+(unsigned long long)customOrderForGlobalSortType:(long long)arg1 ;
+(id)stringNameForDirection:(unsigned long long)arg1 order:(unsigned long long)arg2 ;
+(id)noteSortTypeDefaultAscending;
+(id)currentDefaultMenuItemString;
+(id)folderNoteSortTypeFromValue:(id)arg1 ;
+(unsigned long long)sortTypeOrderForTag:(unsigned long long)arg1 ;
+(unsigned long long)sortTypeDirectionForTag:(unsigned long long)arg1 ;
+(unsigned long long)tagForSortTypeOrder:(unsigned long long)arg1 ;
+(unsigned long long)tagForSortTypeDirection:(unsigned long long)arg1 ;
+(BOOL)isTagAnOrder:(long long)arg1 ;
+(BOOL)isTagADirection:(long long)arg1 ;
+(id)sortTypeOrderValues;
+(id)actionItemTitleForOrder:(unsigned long long)arg1 ;
+(id)rd_actionItemTitleForOrder:(unsigned long long)arg1 ;
+(id)segmentItemTitleForOrder:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(unsigned long long)order;
-(BOOL)isDefault;
-(BOOL)isAscending;
-(void)setOrder:(unsigned long long)arg1 ;
-(unsigned long long)direction;
-(void)setDirection:(unsigned long long)arg1 ;
-(id)debugStringNameForOrder:(unsigned long long)arg1 ;
-(id)folderNoteSortTypeByChangingOrder:(unsigned long long)arg1 ;
-(id)folderNoteSortTypeByChangingDirection;
-(NSNumber *)valueRepresentation;
-(NSString *)summaryViewTitleDescription;
-(id)currentActionItemTitle;
@end

