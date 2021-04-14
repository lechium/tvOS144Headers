/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:02 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface PSIIndexToken : NSObject {

	short _category;
	short _owningCategory;
	NSString* _text;
	NSString* _identifier;

}

@property (nonatomic,copy,readonly) NSString * text;                    //@synthesize text=_text - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) short category;                          //@synthesize category=_category - In the implementation block
@property (nonatomic,readonly) short owningCategory;                    //@synthesize owningCategory=_owningCategory - In the implementation block
-(id)description;
-(NSString *)identifier;
-(short)category;
-(NSString *)text;
-(id)initWithText:(id)arg1 identifier:(id)arg2 category:(short)arg3 owningCategory:(short)arg4 ;
-(short)owningCategory;
@end

