/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:50 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, NSString, NSDictionary, CIBarcodeDescriptor;

@interface AVMetadataMachineReadableCodeObjectInternal : NSObject {

	NSArray* corners;
	NSString* stringValue;
	NSDictionary* basicDescriptor;
	BOOL decoded;
	CIBarcodeDescriptor* descriptor;

}

@property (retain) NSArray * corners; 
@property (retain) NSString * stringValue; 
@property (retain) NSDictionary * basicDescriptor; 
@property (assign) BOOL decoded; 
@property (retain) CIBarcodeDescriptor * descriptor; 
-(void)dealloc;
-(NSString *)stringValue;
-(CIBarcodeDescriptor *)descriptor;
-(void)setStringValue:(NSString *)arg1 ;
-(void)setDescriptor:(CIBarcodeDescriptor *)arg1 ;
-(NSArray *)corners;
-(void)setCorners:(NSArray *)arg1 ;
-(NSDictionary *)basicDescriptor;
-(void)setBasicDescriptor:(NSDictionary *)arg1 ;
-(BOOL)decoded;
-(void)setDecoded:(BOOL)arg1 ;
@end

