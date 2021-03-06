/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:47 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CNPropertyBestIDSValueQueryDelegate;
@class NSMutableArray, NSArray, CNPropertyIDSRequest, CNPropertyGroupItem;

@interface CNPropertyBestIDSValueQuery : NSObject {

	NSMutableArray* _validIDSItems;
	id<CNPropertyBestIDSValueQueryDelegate> _delegate;
	NSArray* _propertyItems;
	CNPropertyIDSRequest* _idsRequest;

}

@property (nonatomic,retain) NSArray * propertyItems;                                              //@synthesize propertyItems=_propertyItems - In the implementation block
@property (nonatomic,retain) CNPropertyIDSRequest * idsRequest;                                    //@synthesize idsRequest=_idsRequest - In the implementation block
@property (nonatomic,retain) NSMutableArray * validIDSItems;                                       //@synthesize validIDSItems=_validIDSItems - In the implementation block
@property (nonatomic,readonly) CNPropertyGroupItem * bestIDSProperty; 
@property (assign,nonatomic,__weak) id<CNPropertyBestIDSValueQueryDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<CNPropertyBestIDSValueQueryDelegate>)delegate;
-(void)setDelegate:(id<CNPropertyBestIDSValueQueryDelegate>)arg1 ;
-(void)cancel;
-(NSArray *)propertyItems;
-(void)setPropertyItems:(NSArray *)arg1 ;
-(CNPropertyGroupItem *)bestIDSProperty;
-(id)initWithPropertyItems:(id)arg1 service:(id)arg2 ;
-(NSMutableArray *)validIDSItems;
-(void)setValidIDSItems:(NSMutableArray *)arg1 ;
-(void)setIdsRequest:(CNPropertyIDSRequest *)arg1 ;
-(CNPropertyIDSRequest *)idsRequest;
@end

