/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:22 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSNumber;

@interface FASharedService : NSObject {

	BOOL _isSeparator;
	BOOL _isDefault;
	NSString* _name;
	NSNumber* _order;
	NSString* _displayLabel;
	NSString* _subLabel;
	NSString* _detailLabel;
	NSString* _iconURLString;
	NSString* _iconURLStringx2;
	NSString* _iconURLStringx3;
	NSString* _actionURLString;
	NSString* _groupID;

}

@property (nonatomic,readonly) BOOL isSeparator;                        //@synthesize isSeparator=_isSeparator - In the implementation block
@property (nonatomic,readonly) BOOL isDefault;                          //@synthesize isDefault=_isDefault - In the implementation block
@property (nonatomic,readonly) NSString * name;                         //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSNumber * order;                        //@synthesize order=_order - In the implementation block
@property (nonatomic,readonly) NSString * displayLabel;                 //@synthesize displayLabel=_displayLabel - In the implementation block
@property (nonatomic,readonly) NSString * subLabel;                     //@synthesize subLabel=_subLabel - In the implementation block
@property (nonatomic,readonly) NSString * detailLabel;                  //@synthesize detailLabel=_detailLabel - In the implementation block
@property (nonatomic,readonly) NSString * iconURLString;                //@synthesize iconURLString=_iconURLString - In the implementation block
@property (nonatomic,readonly) NSString * iconURLStringx2;              //@synthesize iconURLStringx2=_iconURLStringx2 - In the implementation block
@property (nonatomic,readonly) NSString * iconURLStringx3;              //@synthesize iconURLStringx3=_iconURLStringx3 - In the implementation block
@property (nonatomic,readonly) NSString * actionURLString;              //@synthesize actionURLString=_actionURLString - In the implementation block
@property (nonatomic,readonly) NSString * groupID;                      //@synthesize groupID=_groupID - In the implementation block
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSNumber *)order;
-(BOOL)isDefault;
-(NSString *)groupID;
-(NSString *)displayLabel;
-(NSString *)iconURLString;
-(NSString *)subLabel;
-(BOOL)isEqualToSharedService:(id)arg1 ;
-(NSString *)detailLabel;
-(NSString *)iconURLStringx2;
-(NSString *)iconURLStringx3;
-(NSString *)actionURLString;
-(BOOL)isSeparator;
@end

