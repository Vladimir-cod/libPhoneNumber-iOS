//
//  NBAsYouTypeFormatter.h
//  libPhoneNumber
//
//  Created by ishtar on 13. 2. 25..
//

#import <Foundation/Foundation.h>

@class NBAsYouTypeFormatter;
@class NBMetadataHelper;

@interface NBAsYouTypeFormatter : NSObject

- (instancetype)initWithRegionCode:(NSString *)regionCode;
- (instancetype)initWithRegionCode:(NSString *)regionCode metadataHelper:(NBMetadataHelper *)helper;

- (NSString *)inputString:(NSString *)string;
- (NSString *)inputStringAndRememberPosition:(NSString *)string;

- (NSString *)inputDigit:(NSString *)nextChar;
- (NSString *)inputDigitAndRememberPosition:(NSString *)nextChar;

- (NSString *)removeLastDigit;
- (NSString *)removeLastDigitAndRememberPosition;

- (NSInteger)getRememberedPosition;

- (void)clear;

@property(nonatomic, assign, readonly) BOOL isSuccessfulFormatting;

@end(NSInteger)getRememberedPosition;

